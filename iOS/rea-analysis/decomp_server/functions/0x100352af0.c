// rea decompile_all
// name: FUN_100352af0
// address: 0x100352af0
// body: available
// range: 0x100352af0-0x100352c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100352af0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 auStack_88 [24];
  long local_70;
  undefined8 uStack_68;
  
  lVar12 = unaff_x20[3];
  uStack_68 = *(undefined8 *)(*unaff_x20 + 0x58);
  lVar13 = *(long *)(*unaff_x20 + 0x50);
  local_70 = lVar13;
  FUN_1000efc08(auStack_88);
  (**(code **)(*(long *)(lVar13 + -8) + 0x10))();
  _swift_retain(lVar12);
  puVar8 = auStack_88;
  FUN_100352338();
  puVar9 = auStack_88;
  FUN_10003f094();
  lVar6 = unaff_x20[4];
  lVar13 = unaff_x20[5];
  lVar3 = unaff_x20[6];
  lVar1 = unaff_x20[7];
  lVar4 = unaff_x20[8];
  lVar2 = unaff_x20[10];
  lVar5 = unaff_x20[0xb];
  lVar7 = unaff_x20[9];
  FUN_100357c88();
  puVar10 = puVar9;
  _swift_allocObject();
  *(undefined8 *)(puVar10 + 0x18) = 0;
  *(long *)(puVar10 + 0x20) = lVar12;
  *(undefined1 **)(puVar10 + 0x10) = puVar8;
  puVar10[0x28] = (char)lVar6;
  *(long *)(puVar10 + 0x30) = lVar13;
  *(long *)(puVar10 + 0x38) = lVar3;
  *(long *)(puVar10 + 0x40) = lVar1;
  *(long *)(puVar10 + 0x48) = lVar4;
  puVar10[0x50] = (char)lVar7;
  *(long *)(puVar10 + 0x58) = lVar2;
  *(long *)(puVar10 + 0x60) = lVar5;
  param_1[3] = puVar9;
  puVar11 = &DAT_100a88410;
  FUN_100358110(&DAT_100a88410,FUN_100357c88,&TargetProtocolConformanceDescriptor_10081c0b8);
  param_1[4] = puVar11;
  *param_1 = puVar10;
  FUN_100317824(lVar13,lVar3);
  FUN_100357714(lVar1,lVar4,(char)lVar7);
  _swift_retain(lVar5);
  return;
}

