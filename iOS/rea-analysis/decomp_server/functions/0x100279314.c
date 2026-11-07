// rea decompile_all
// name: FUN_100279314
// address: 0x100279314
// body: available
// range: 0x100279314-0x10027947f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100279314(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  lVar2 = 0;
  FUN_100277ad0();
  puVar5 = (undefined8 *)
           (&stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  FUN_1002782c4();
  uVar9 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar10 = (undefined8 *)((long)puVar5 - uVar9);
  lVar11 = (long)puVar10 - uVar9;
  FUN_100082394();
  puVar4 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar2);
  if ((int)puVar4 == 9) {
    FUN_1000823d8(puVar5,lVar11,FUN_1002782c4);
    FUN_1000823d8(lVar11,puVar10,FUN_1002782c4);
    puVar4 = puVar10;
    _swift_getEnumCaseMultiPayload(puVar10,lVar3);
    iVar1 = (int)puVar4;
    if (iVar1 < 3) {
      if (iVar1 != 0) {
LAB_100279420:
        pcVar7 = FUN_1002782c4;
        puVar5 = puVar10;
        goto LAB_10027942c;
      }
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar10,lVar2);
    }
    else {
      if (iVar1 == 3) {
        uVar8 = 0;
        uVar6 = *puVar10;
        goto LAB_100279438;
      }
      if (iVar1 == 4) goto LAB_100279420;
    }
  }
  else {
    pcVar7 = FUN_100277ad0;
LAB_10027942c:
    FUN_1000d27dc(puVar5,pcVar7);
  }
  uVar6 = 0;
  uVar8 = 1;
LAB_100279438:
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = uVar6;
  return auVar12;
}

