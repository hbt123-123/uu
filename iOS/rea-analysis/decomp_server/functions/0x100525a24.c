// rea decompile_all
// name: FUN_100525a24
// address: 0x100525a24
// body: available
// range: 0x100525a24-0x100525d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100525a24(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_140;
  long local_138;
  undefined *local_130;
  undefined8 local_128;
  long local_120;
  ulong local_118;
  long local_110;
  long lStack_108;
  ulong local_100;
  long lStack_f8;
  long local_f0;
  ulong local_e8;
  undefined1 auStack_e0 [24];
  ulong local_c8;
  long lStack_c0;
  undefined1 auStack_b8 [40];
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  
  puVar3 = &DAT_100aaa130;
  FUN_100004c48(&DAT_100aaa130,&DAT_100836190);
  lVar4 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,param_2,puVar3,"key value ",0);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  local_110 = *(long *)(lVar5 + -8);
  uVar8 = *(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)&local_140 - uVar8;
  lVar11 = lVar12 - uVar8;
  lStack_108 = lVar5;
  _swift_retain(param_1);
  __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
  __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_b8);
  local_130 = puVar3;
  local_128 = param_3;
  __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
            (&local_90,auStack_b8,param_2,puVar3,param_3);
  local_120 = local_90;
  local_140 = local_80;
  local_118 = local_80 + 0x40U >> 6;
  lVar5 = lStack_78;
  local_138 = lVar11;
  do {
    lVar9 = local_120;
    uVar7 = local_128;
    puVar3 = local_130;
    lVar6 = lVar5;
    local_100 = local_70;
    lStack_f8 = lVar5;
    if (local_70 == 0) {
      uVar8 = local_118;
      if ((long)local_118 <= lVar5 + 1) {
        uVar8 = lVar5 + 1;
      }
      do {
        lVar6 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100525d70);
          (*pcVar2)();
        }
        if ((long)local_118 <= lVar6) {
          local_e8 = 0;
          uVar7 = 1;
          lVar6 = uVar8 - 1;
          goto LAB_100525c2c;
        }
        local_70 = *(ulong *)(lStack_88 + lVar6 * 8);
        lVar5 = lVar5 + 1;
      } while (local_70 == 0);
    }
    uVar8 = (local_70 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_70 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    local_e8 = local_70 - 1 & local_70;
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar6 << 6;
    lVar5 = local_120;
    __ss17_NativeDictionaryV5_keysSpyxGvg(local_120,param_2,local_130,local_128);
    lVar11 = local_138;
    lVar10 = *(long *)(param_2 + -8);
    local_f0 = lVar5 + *(long *)(lVar10 + 0x48) * uVar8;
    __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar9,param_2,puVar3,uVar7);
    iVar1 = *(int *)(lVar4 + 0x30);
    (**(code **)(lVar10 + 0x10))(lVar12,local_f0,param_2);
    FUN_1000b142c(lVar9 + uVar8 * 0x28,lVar12 + iVar1);
    uVar7 = 0;
LAB_100525c2c:
    lVar5 = lVar6;
    lVar9 = *(long *)(lVar4 + -8);
    (**(code **)(lVar9 + 0x38))(lVar12,uVar7,1,lVar4);
    (**(code **)(local_110 + 0x20))(lVar11,lVar12,lStack_108);
    lVar6 = lVar11;
    (**(code **)(lVar9 + 0x30))(lVar11,1,lVar4);
    if ((int)lVar6 == 1) {
      FUN_10003f638(local_120,lStack_88,local_140,lStack_f8,local_100);
      goto LAB_100525d44;
    }
    thunk_FUN_1000a0074(lVar11 + *(int *)(lVar4 + 0x30),auStack_e0);
    lVar9 = lStack_c0;
    uVar8 = local_c8;
    FUN_10003f030(auStack_e0,local_c8);
    (**(code **)(lVar9 + 0x20))(uVar8,lVar9);
    if ((uVar8 & 1) == 0) {
      FUN_10003f638(local_120,lStack_88,local_140,lStack_f8,local_100);
      (**(code **)(*(long *)(param_2 + -8) + 8))(lVar11,param_2);
      FUN_10003f094(auStack_e0);
LAB_100525d44:
      return (int)lVar6 == 1;
    }
    (**(code **)(*(long *)(param_2 + -8) + 8))(lVar11,param_2);
    FUN_10003f094(auStack_e0);
    local_70 = local_e8;
  } while( true );
}

