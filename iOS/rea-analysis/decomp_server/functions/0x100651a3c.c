// rea decompile_all
// name: FUN_100651a3c
// address: 0x100651a3c
// body: available
// range: 0x100651a3c-0x100651cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100651a3c(ulong *param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  code *pcVar11;
  char cVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_a0 [8];
  long local_98;
  ulong local_90;
  ulong local_88;
  ulong uStack_80;
  char local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  lVar3 = 0;
  local_90 = param_2;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___sSzTL_100995aa8,PTR___s5WordsSzTl_1009956f0);
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  puVar7 = auStack_a0 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_3 - 8);
  lVar14 = (long)puVar7 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = *(undefined8 *)(*(long *)(param_4 + 0x18) + 0x10);
  lVar4 = 0;
  local_98 = lVar3;
  _swift_getAssociatedTypeWitness
            (0,uVar15,param_3,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar3 = lVar14 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = uVar15;
  _swift_getAssociatedConformanceWitness
            (uVar15,param_3,lVar4,puVar1,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar3,&DAT_10084d4f0,0x100,lVar4,uVar5);
  uVar2 = local_90;
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(lVar14,lVar3,param_3,uVar15);
  puVar9 = *(undefined1 **)(*(long *)(param_4 + 0x20) + 8);
  uVar6 = uVar2;
  __sSL2geoiySbx_xtFZTj(uVar2,lVar14,param_3);
  pcVar11 = *(code **)(lVar13 + 8);
  (*pcVar11)(lVar14,param_3);
  if ((uVar6 & 1) == 0) {
    __sSz5words5WordsQzvgTj(puVar7,param_3,param_4);
    lVar3 = local_98;
    _swift_getAssociatedConformanceWitness
              (param_4,param_3,local_98,PTR___sSzTL_100995aa8,PTR___sSz5WordsSz_SkTn_100995aa0);
    __sSaySayxGqd__c7ElementQyd__RszSTRd__lufC
              (puVar7,PTR___sSuN_100995a50,lVar3,
               *(undefined8 *)(*(long *)(*(long *)(param_4 + 8) + 8) + 8));
    local_68 = puVar7;
    FUN_10065fc5c();
    local_88 = 0;
    uStack_80 = 0;
    local_78 = '\x02';
    local_70 = local_68;
    FUN_100645d2c();
    puVar9 = local_70;
    cVar12 = local_78;
    uVar8 = uStack_80;
    uVar6 = local_88;
    if (local_78 == '\0') {
      (*pcVar11)(uVar2,param_3);
      if (uVar6 == 0 && uVar8 == 0) goto LAB_100651bc8;
    }
    else if (local_78 == '\x01') {
      (*pcVar11)(uVar2,param_3);
    }
    else {
      lVar3 = *(long *)(local_70 + 0x10);
      (*pcVar11)(uVar2,param_3);
      if (lVar3 == 0) goto LAB_100651bc8;
    }
    uVar10 = 1;
  }
  else {
    uVar6 = uVar2;
    uVar8 = param_3;
    FUN_10065250c();
    cVar12 = (char)param_4;
    (*pcVar11)(uVar2,param_3);
LAB_100651bc8:
    uVar10 = 0;
  }
  *param_1 = uVar6;
  param_1[1] = uVar8;
  *(char *)(param_1 + 2) = cVar12;
  param_1[3] = (ulong)puVar9;
  *(undefined1 *)(param_1 + 4) = uVar10;
  return;
}

