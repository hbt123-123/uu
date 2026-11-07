// rea decompile_all
// name: FUN_100640074
// address: 0x100640074
// body: available
// range: 0x100640074-0x10064026b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100640074(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  puVar2 = &DAT_1009e3550;
  puVar1 = puVar2;
  _swift_allocObject(&DAT_1009e3550,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  _swift_allocObject(&DAT_1009e3550,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  FUN_10003f030(unaff_x20 + 0x18,uVar3);
  (**(code **)(lVar7 + 0x10))(auStack_78,8,FUN_100640fb4,puVar2,FUN_100640fb4,puVar2,uVar3,lVar7);
  if (unaff_x21 == 0) {
    _swift_beginAccess(unaff_x20 + 0x70,auStack_90,0x21,0);
    FUN_100640fd4(auStack_78,unaff_x20 + 0x70);
    _swift_endAccess(auStack_90);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar7 = *(long *)(unaff_x20 + 0x38);
    FUN_10003f030(unaff_x20 + 0x18,uVar3);
    (**(code **)(lVar7 + 8))(uVar3,lVar7);
    if (((uint)uVar3 >> 3 & 1) == 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
      lVar7 = *(long *)(unaff_x20 + 0x38);
      FUN_10003f030(unaff_x20 + 0x18,uVar3);
      pcVar6 = *(code **)(lVar7 + 0x10);
      pcVar4 = FUN_100640f94;
      puVar5 = puVar1;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
      lVar7 = *(long *)(unaff_x20 + 0x38);
      FUN_10003f030(unaff_x20 + 0x18,uVar3);
      pcVar6 = *(code **)(lVar7 + 0x10);
      pcVar4 = FUN_100640fb4;
      puVar5 = puVar2;
    }
    (*pcVar6)(auStack_78,8,pcVar4,puVar5,FUN_100640fb4,puVar2,uVar3,lVar7);
    _swift_release(puVar1);
    _swift_release(puVar2);
    _swift_beginAccess(unaff_x20 + 0x48,auStack_90,0x21,0);
    FUN_100640fd4(auStack_78,unaff_x20 + 0x48);
    _swift_endAccess(auStack_90);
  }
  else {
    _swift_release(puVar1);
    _swift_release(puVar2);
  }
  return;
}

