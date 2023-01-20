#ifndef COM_PORT_SERVICE_H
#define COM_PORT_SERVICE_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

class ComPortService : public QObject
{

public:
    ComPortService();
    ~ComPortService();

    void scan();
    QList<QString> getList();

    bool connect(QString port_name);
    void disconnect();

    bool send(const char *data, qint64 size);

    bool isConnected();

private:

    const size_t m_from = 1;
    const size_t m_to = 255;

    QList<QSerialPortInfo> m_ports;

    bool m_connected = false;

    QSerialPort *m_port;

};

#endif // COM_PORT_SERVICE_H
