// rea decompile_all
// name: FUN_1002632d8
// address: 0x1002632d8
// body: available
// range: 0x1002632d8-0x1002635af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002632d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *apuStack_a0 [2];
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  local_88 = *(long *)(lVar3 + -8);
  lVar5 = (long)apuStack_a0 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_90 = lVar5;
  lStack_80 = lVar3;
  FUN_10026d874();
  puVar11 = (undefined8 *)
            (lVar5 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  FUN_10026d8cc();
  lVar8 = *(long *)(lVar5 + -8);
  lVar12 = (long)puVar11 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar10 = (undefined8 *)(lVar12 + *(int *)(lVar5 + 0x14));
    local_68 = (undefined8 *)(lVar12 + *(int *)(lVar5 + 0x18));
    local_70 = (undefined8 *)(lVar12 + *(int *)(lVar5 + 0x1c));
    param_2 = param_2 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
    local_78 = *(long *)(lVar8 + 0x48);
    apuStack_a0[1] = puVar10;
    do {
      FUN_100082394(param_2,lVar12,FUN_10026d8cc);
      FUN_100082394(lVar12,puVar11,FUN_10026d874);
      puVar6 = puVar11;
      _swift_getEnumCaseMultiPayload(puVar11,lVar4);
      lVar2 = lStack_80;
      lVar8 = local_88;
      lVar5 = local_90;
      if ((int)puVar6 == 0) {
        uVar9 = *puVar11;
        uVar1 = puVar11[1];
        __ss6HasherV8_combineyySuF(0);
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar9,uVar1);
        FUN_100006cdc(uVar9,uVar1);
      }
      else if ((int)puVar6 == 1) {
        (**(code **)(local_88 + 0x20))(local_90,puVar11,lStack_80);
        __ss6HasherV8_combineyySuF(1);
        puVar7 = &DAT_100a81028;
        FUN_100005c90(&DAT_100a81028,PTR___s10Foundation3URLVMa_100996188,
                      PTR___s10Foundation3URLVSHAAMc_1009961a0);
        __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,puVar7);
        puVar10 = apuStack_a0[1];
        (**(code **)(lVar8 + 8))(lVar5,lVar2);
      }
      else {
        uVar9 = puVar11[1];
        __ss6HasherV8_combineyySuF(2);
        __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
        __ss6HasherV8_combineyys6UInt64VF(uVar9);
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,*puVar10,puVar10[1]);
      lVar5 = local_68[1];
      if (lVar5 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        uVar9 = *local_68;
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar5);
      }
      lVar5 = local_70[1];
      if (lVar5 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        uVar9 = *local_70;
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar5);
      }
      FUN_1000d27dc(lVar12,FUN_10026d8cc);
      param_2 = param_2 + local_78;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

