// rea decompile_all
// name: FUN_1000272d4
// address: 0x1000272d4
// body: available
// range: 0x1000272d4-0x10002759b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000272d4(undefined8 *param_1,undefined4 param_2,undefined1 param_3,long *param_4,
                  undefined4 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(100);
  __sSS6appendyySSF(0xd00000000000002f,0x800000010087a3e0);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,param_2);
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x6c656e6e61686320,0xea0000000000203a);
  local_78 = (undefined *)CONCAT71(local_78._1_7_,param_3);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,&DAT_10099e260,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x746e657272756320,0xec000000203a6449);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,(int)param_4[1]);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x496e656572637320,0xec000000203a7364);
  lVar7 = *param_4;
  lVar8 = *(long *)(lVar7 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar8 != 0) {
    local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
    _swift_bridgeObjectRetain(lVar7);
    FUN_10006fafc(0,lVar8,0);
    puVar9 = (undefined8 *)(lVar7 + 0x30);
    do {
      puVar5 = local_78;
      uVar3 = puVar9[-2];
      FUN_10044e04c(uVar3,puVar9[-1],*puVar9);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_78 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_10006fafc(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = local_78;
      *(ulong *)(local_78 + 0x10) = uVar1 + 1;
      *(int *)(local_78 + uVar1 * 4 + 0x20) = (int)uVar3;
      puVar9 = puVar9 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease(lVar7);
  }
  puVar2 = PTR___ss5Int32VN_100995c78;
  puVar4 = puVar5;
  puVar6 = PTR___ss5Int32VN_100995c78;
  __sSa11descriptionSSvg(puVar5,PTR___ss5Int32VN_100995c78);
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(puVar4,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3a746c7573657220,0xe900000000000020);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,param_5);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (puVar2,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

