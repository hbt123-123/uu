// rea decompile_all
// name: FUN_10004f768
// address: 0x10004f768
// body: available
// range: 0x10004f768-0x10004f93f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10004f768(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  __ss11_StringGutsV4growyySiF(0x166a);
  uVar1 = 0xed00000a0a687361;
  __sSS6appendyySSF(0x622f6e69622f2123,0xed00000a0a687361);
  FUN_10004f940();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = 0x80000001000c7510;
  __sSS6appendyySSF(0xd000000000000515,0x80000001000c7510);
  FUN_10004fa10();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = 0x80000001000c7a30;
  __sSS6appendyySSF(0xd000000000000f46,0x80000001000c7a30);
  FUN_10004fae0();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = 0x80000001000c8980;
  __sSS6appendyySSF(0xd00000000000009d,0x80000001000c8980);
  FUN_10004fbb0();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = 0x80000001000c8a20;
  __sSS6appendyySSF(0xd00000000000013d,0x80000001000c8a20);
  FUN_10004fc80();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = 0x80000001000c8b60;
  __sSS6appendyySSF(0xd000000000000019,0x80000001000c8b60);
  FUN_100052b78();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return ZEXT816(0xe000000000000000) << 0x40;
}

