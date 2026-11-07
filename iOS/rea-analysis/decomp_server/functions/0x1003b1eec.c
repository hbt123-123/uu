// rea decompile_all
// name: FUN_1003b1eec
// address: 0x1003b1eec
// body: available
// range: 0x1003b1eec-0x1003b200f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b1eec(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [12];
  uid_t local_54;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40));
  FUN_10022403c();
  lVar2 = lVar1;
  FUN_10021bec0(lVar1,&DAT_100b36820);
  if (DAT_100a89278 != -1) {
    _swift_once(&DAT_100a89278,FUN_1003b1c88);
  }
  FUN_10021bec0(lVar1,&DAT_100b367f0);
  local_54 = _getuid();
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __s10Foundation3URLV22appendingPathComponentyACSSF
            (auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _swift_bridgeObjectRelease(puVar3);
  FUN_10040625c(lVar2,1);
  (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}

