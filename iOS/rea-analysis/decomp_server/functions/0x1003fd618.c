// rea decompile_all
// name: FUN_1003fd618
// address: 0x1003fd618
// body: available
// range: 0x1003fd618-0x1003fd763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003fd618(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_x8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = DAT_100a8e098;
  if (DAT_100a8e098 == 0) {
    lVar3 = 0;
  }
  else {
    _swift_retain(DAT_100a8e098);
    FUN_1005cce88();
    _swift_release(lVar3);
    lVar3 = DAT_100a8e098;
  }
  DAT_100a8e098 = 0;
  _swift_release(lVar3);
  if (DAT_100a89360 != -1) {
    _swift_once(&DAT_100a89360,FUN_1003fba90);
  }
  FUN_10021bec0(puVar2,&DAT_100a8e0a0);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(auStack_60 + -extraout_x8,1,1,lVar3);
  _swift_beginAccess(puVar2,auStack_58,0x21,0);
  FUN_100135ab0(auStack_60 + -extraout_x8,puVar2);
  _swift_endAccess(auStack_58);
  uVar1 = DAT_100a8e0c0;
  DAT_100a8e0b8 = 0;
  DAT_100a8e0c0 = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar1);
  return;
}

