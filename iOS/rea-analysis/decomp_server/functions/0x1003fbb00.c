// rea decompile_all
// name: FUN_1003fbb00
// address: 0x1003fbb00
// body: available
// range: 0x1003fbb00-0x1003fbc57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003fbc3c) */

undefined1  [16] FUN_1003fbb00(void)

{
  ID self;
  long lVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar3 + 0x40));
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  self = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  FUN_1003fed60(&local_48);
  _objc_msgSend(self,"unlock");
  if (*(long *)(local_48 + 0x10) == 0) {
    _swift_bridgeObjectRelease(local_48);
    local_48 = 0;
    lVar2 = -0x2000000000000000;
  }
  else {
    lVar2 = local_48 +
            ((ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
            ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff));
    (**(code **)(lVar3 + 0x10))(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2,lVar1)
    ;
    _swift_bridgeObjectRelease(local_48);
    __s10Foundation3URLV4pathSSvg();
    (**(code **)(lVar3 + 8))(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = local_48;
  return auVar4;
}

