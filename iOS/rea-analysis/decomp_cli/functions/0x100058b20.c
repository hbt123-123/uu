// rea decompile_all
// name: FUN_100058b20
// address: 0x100058b20
// body: available
// range: 0x100058b20-0x100058ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100058b20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  __ss11_StringGutsV4growyySiF(0x222);
  __sSS6appendyySSF(0x666564706d6f6323,0xe900000000000020);
  __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = 0xe200000000000000;
  __sSS6appendyySSF(0xa0a,0xe200000000000000);
  FUN_100058ccc();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = 0x80000001000c9d10;
  __sSS6appendyySSF(0xd0000000000000b9,0x80000001000c9d10);
  FUN_10004fbb0();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = 0x80000001000c9dd0;
  __sSS6appendyySSF(0xd0000000000000a2,0x80000001000c9dd0);
  FUN_100058ccc();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = 0x80000001000c9e80;
  __sSS6appendyySSF(0xd000000000000024,0x80000001000c9e80);
  FUN_10004f940();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = 0x80000001000c9eb0;
  __sSS6appendyySSF(0xd00000000000008a,0x80000001000c9eb0);
  FUN_100058d78();
  uVar1 = uVar2;
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  FUN_100052b78();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  return ZEXT816(0xe000000000000000) << 0x40;
}

