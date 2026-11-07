// rea decompile_all
// name: FUN_1006163bc
// address: 0x1006163bc
// body: available
// range: 0x1006163bc-0x1006164e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006163bc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long *unaff_x20;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  uVar1 = 0xff;
  FUN_100616300(0xff,*(undefined8 *)(*unaff_x20 + 0x50));
  lVar2 = 0;
  FUN_100608530(0,uVar1);
  lVar6 = *(long *)(lVar2 + -8);
  puVar5 = auStack_60 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar4 = (long *)unaff_x20[2];
  pcVar7 = *(code **)(*plVar4 + 0x58);
  _swift_retain(plVar4);
  (*pcVar7)(puVar5);
  _swift_release(plVar4);
  puVar3 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar2);
  (**(code **)(lVar6 + 8))(puVar5,lVar2);
  if ((int)puVar3 != 1) {
    if (DAT_100aafef8 != -1) {
      _swift_once(&DAT_100aafef8,FUN_10060f124);
    }
    _swift_beginAccess(&DAT_100b3a770,auStack_58,0,0);
    uVar1 = DAT_100b3a790;
    pcVar7 = DAT_100b3a788;
    _swift_retain(DAT_100b3a790);
    (*pcVar7)(1);
    _swift_release(uVar1);
  }
  _swift_release(unaff_x20[2]);
  return;
}

