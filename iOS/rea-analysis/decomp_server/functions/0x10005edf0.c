// rea decompile_all
// name: FUN_10005edf0
// address: 0x10005edf0
// body: available
// range: 0x10005edf0-0x10005ef9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005edf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if ((*(byte *)(unaff_x20 + 0x90) & 1) == 0) {
    _swift_beginAccess(unaff_x20 + 0x88,auStack_78,0,0);
    lVar10 = *(long *)(unaff_x20 + 0x88);
    if (*(long *)(lVar10 + 0x10) != 0) {
      *(undefined1 *)(unaff_x20 + 0x90) = 1;
      _swift_beginAccess(unaff_x20 + 0x88,auStack_90,0x21,0);
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10005ef9c);
        (*pcVar6)();
      }
      pcVar6 = *(code **)(lVar10 + 0x20);
      uVar3 = *(undefined8 *)(lVar10 + 0x28);
      uVar1 = *(undefined8 *)(lVar10 + 0x30);
      uVar4 = *(undefined8 *)(lVar10 + 0x38);
      _swift_retain(uVar3);
      _swift_retain(uVar4);
      FUN_100082518(0,1,FUN_1000346dc,FUN_100074fd0);
      _swift_endAccess(auStack_90);
      puVar7 = &DAT_100998670;
      _swift_allocObject(&DAT_100998670,0x11,7);
      puVar7[0x10] = 0;
      puVar8 = &DAT_1009985d0;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar8 + 0x10);
      puVar9 = &DAT_100998698;
      _swift_allocObject(&DAT_100998698,0x20,7);
      *(undefined **)(puVar9 + 0x10) = puVar7;
      *(undefined **)(puVar9 + 0x18) = puVar8;
      uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
      uVar5 = *(undefined8 *)(unaff_x20 + 0xa0);
      *(undefined8 *)(unaff_x20 + 0x98) = uVar1;
      *(undefined8 *)(unaff_x20 + 0xa0) = uVar4;
      _swift_retain(uVar4);
      _swift_retain(puVar7);
      FUN_10007ed2c(uVar2,uVar5);
      uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
      uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
      *(code **)(unaff_x20 + 0xa8) = FUN_1000750a8;
      *(undefined **)(unaff_x20 + 0xb0) = puVar9;
      _swift_retain(puVar9);
      FUN_10007ed2c(uVar1,uVar2);
      (*pcVar6)(*(undefined8 *)(unaff_x20 + 0xb8),FUN_1000750a8,puVar9);
      _swift_release(uVar4);
      _swift_release(uVar3);
      _swift_release(puVar7);
      _swift_release(puVar9);
    }
  }
  return;
}

