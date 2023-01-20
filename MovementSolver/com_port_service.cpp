#include "com_port_service.h"

ComPortService::ComPortService()
{
    m_port = new QSerialPort(this);

    m_port->setBaudRate    (QSerialPort::Baud115200); //TODO:: remove magic
    m_port->setDataBits    (QSerialPort::Data8);
    m_port->setParity      (QSerialPort::NoParity);
    m_port->setStopBits    (QSerialPort::OneStop);
    m_port->setFlowControl (QSerialPort::NoFlowControl);
}

ComPortService::~ComPortService()
{
    m_port->close();
    delete m_port;
}

void ComPortService::scan()
{
    m_ports = QSerialPortInfo::availablePorts();
}

QList<QString> ComPortService::getList()
{
    QList<QString> ports;

    for(QSerialPortInfo& port : m_ports)
    {
        ports.append(port.portName());
    }

    return ports;
}

bool ComPortService::connect(QString port_name)
{
    if(m_connected)
        return false;

    m_port->setPortName(port_name);

    m_connected = m_port->open(QIODevice::ReadWrite);

    return m_connected;
}

void ComPortService::disconnect()
{
    m_port->close();
    m_connected = false;
}

bool ComPortService::send(const char *data, qint64 size)
{
    if(!m_connected)
        return false;

    qint64 r = m_port->write(data, size);

    if(r != size)
        return false;

    return true;
}

bool ComPortService::isConnected()
{
    return m_connected;
}
