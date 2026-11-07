// rea decompile_all
// name: FUN_100660000
// address: 0x100660000
// body: available
// range: 0x100660000-0x10066041b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100660000(undefined1 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined1 local_70;
  ulong local_68;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,PTR___sSTTL_100995860,PTR___s8IteratorSTTl_100995710);
  lVar12 = *(long *)(lVar3 + -8);
  puVar5 = auStack_a0 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_2 + -8);
  uVar11 = (long)puVar5 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = param_2;
  __sST19underestimatedCountSivgTj(param_2,param_3);
  (**(code **)(lVar13 + 0x10))(uVar11,param_1,param_2);
  if (lVar4 < 3) {
    __sST12makeIterator0B0QzyFTj(puVar5,param_2,param_3);
    _swift_getAssociatedConformanceWitness
              (param_3,param_2,lVar3,PTR___sSTTL_100995860,PTR___sST8IteratorST_StTn_100995858);
    __sSt4next7ElementQzSgyFTj(&local_80,lVar3,param_3);
    uVar2 = local_80;
    if ((char)local_78 == '\x01') {
      (**(code **)(lVar13 + 8))(param_1,param_2);
      (**(code **)(lVar12 + 8))(puVar5,lVar3);
      return 0;
    }
    __sSt4next7ElementQzSgyFTj(&local_80,lVar3,param_3);
    if ((char)local_78 == '\x01') {
      (**(code **)(lVar13 + 8))(param_1,param_2);
      (**(code **)(lVar12 + 8))(puVar5,lVar3);
      return uVar2;
    }
    local_88 = local_80;
    __sSt4next7ElementQzSgyFTj(&local_80,lVar3,param_3);
    if ((char)local_78 == '\x01') {
      (**(code **)(lVar13 + 8))(param_1,param_2);
      (**(code **)(lVar12 + 8))(puVar5,lVar3);
      return uVar2;
    }
    local_98 = local_80;
    uVar6 = 0;
    FUN_10062958c(0,3,0,PTR___swiftEmptyArrayStorage_100995ea0);
    uVar11 = *(ulong *)(uVar6 + 0x10);
    uVar9 = *(ulong *)(uVar6 + 0x18);
    uVar10 = uVar9 >> 1;
    local_90 = uVar11 + 1;
    lVar4 = local_90;
    uVar7 = uVar6;
    if (uVar10 <= uVar11) {
      uVar7 = (ulong)(1 < uVar9);
      FUN_10062958c(uVar7,local_90,1,uVar6);
      uVar9 = *(ulong *)(uVar7 + 0x18);
      uVar10 = uVar9 >> 1;
      lVar4 = local_90;
    }
    *(long *)(uVar7 + 0x10) = lVar4;
    *(undefined8 *)(uVar7 + uVar11 * 8 + 0x20) = uVar2;
    lVar1 = uVar11 + 2;
    uVar6 = uVar7;
    local_90 = lVar12;
    if ((long)uVar10 < lVar1) {
      uVar6 = (ulong)(1 < uVar9);
      FUN_10062958c(uVar6,lVar1,1,uVar7);
    }
    *(long *)(uVar6 + 0x10) = lVar1;
    *(undefined8 *)(uVar6 + lVar4 * 8 + 0x20) = local_88;
    lVar4 = uVar11 + 3;
    uVar11 = uVar6;
    if ((long)(*(ulong *)(uVar6 + 0x18) >> 1) < lVar4) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_10062958c(uVar11,lVar4,1,uVar6);
    }
    *(long *)(uVar11 + 0x10) = lVar4;
    *(undefined8 *)(uVar11 + lVar1 * 8 + 0x20) = local_98;
    while (__sSt4next7ElementQzSgyFTj(&local_80,lVar3,param_3), uVar2 = local_80,
          (local_78 & 1) == 0) {
      uVar9 = *(ulong *)(uVar11 + 0x10);
      uVar7 = uVar11;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar9) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_10062958c(uVar7,uVar9 + 1,1,uVar11);
      }
      *(ulong *)(uVar7 + 0x10) = uVar9 + 1;
      *(undefined8 *)(uVar7 + uVar9 * 8 + 0x20) = uVar2;
      uVar11 = uVar7;
    }
    local_80 = 0;
    local_78 = 0;
    local_70 = 2;
    local_68 = uVar11;
    FUN_100645d2c();
    (**(code **)(lVar13 + 8))(param_1,param_2);
    pcVar8 = *(code **)(local_90 + 8);
  }
  else {
    __sSaySayxGqd__c7ElementQyd__RszSTRd__lufC(uVar11,PTR___sSuN_100995a50,param_2,param_3);
    local_80 = 0;
    local_78 = 0;
    local_70 = 2;
    local_68 = uVar11;
    FUN_100645d2c();
    pcVar8 = *(code **)(lVar13 + 8);
    puVar5 = param_1;
    lVar3 = param_2;
  }
  (*pcVar8)(puVar5,lVar3);
  return local_80;
}

