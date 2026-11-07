// rea decompile_all
// name: FUN_1002788cc
// address: 0x1002788cc
// body: available
// range: 0x1002788cc-0x100278a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002788cc(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  
  lVar3 = 0;
  FUN_100278198();
  puVar9 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar4 + -8);
  lVar10 = (long)puVar9 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100082394();
  puVar5 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar3);
  uVar2 = (uint)puVar5;
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x7b0) == 0) {
      if ((uVar1 & 0x1800) != 0) {
        FUN_1000d27dc(puVar9,FUN_100278198);
        uVar7 = 1;
        goto LAB_100278a08;
      }
      if (uVar2 != 6) goto LAB_1002789b8;
      puVar6 = &DAT_100a824b8;
      puVar8 = &DAT_1008176b0;
      goto LAB_1002789d0;
    }
  }
  else {
LAB_1002789b8:
    if (2 < uVar2) {
      puVar6 = &DAT_100a824b0;
      puVar8 = &DAT_100816d00;
LAB_1002789d0:
      FUN_100004bb4(puVar6,puVar8);
      _swift_errorRelease(*(undefined8 *)(puVar9 + *(int *)(puVar6 + 0x30)));
    }
  }
  pcVar11 = *(code **)(lVar12 + 0x20);
  (*pcVar11)(lVar10,puVar9,lVar4);
  (*pcVar11)(param_1,lVar10,lVar4);
  uVar7 = 0;
LAB_100278a08:
  (**(code **)(lVar12 + 0x38))(param_1,uVar7,1,lVar4);
  return;
}

