// rea decompile_all
// name: FUN_1000baaa8
// address: 0x1000baaa8
// body: available
// range: 0x1000baaa8-0x1000babdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000baaa8(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar5 = (undefined1 *)0xd00000000000001d;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  lVar4 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1003b2558();
  (**(code **)(lVar6 + 0x10))(lVar4,lVar3,lVar2);
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  if (param_2 == '\0') {
    pcVar7 = "privacy_screen_image_mac";
  }
  else {
    puVar5 = &DAT_d000000000000018;
    pcVar7 = "applyCachedImage(for:)";
    if (param_2 != '\x01') {
      puVar5 = (undefined1 *)0xd00000000000001d;
      pcVar7 = " updated overlay in place";
    }
  }
  __sSS6appendyySSF(puVar5,(ulong)pcVar7 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar7 | 0x8000000000000000);
  __sSS6appendyySSF(0x35646d2e,0xe400000000000000);
  uVar1 = uStack_58;
  __s10Foundation3URLV22appendingPathComponentyACSSF(param_1,local_60,uStack_58);
  _swift_bridgeObjectRelease(uVar1);
  (**(code **)(lVar6 + 8))(lVar4,lVar2);
  return;
}

