// rea decompile_all
// name: FUN_1002be134
// address: 0x1002be134
// body: available
// range: 0x1002be134-0x1002be2fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002be134(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  
  local_88 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1002c0aec(0,0,0);
  puVar4 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  uVar8 = *(ulong *)(param_1 + 0x10);
  if (uVar8 != 0) {
    uVar9 = 0;
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar3 = local_88;
      uVar6 = puVar5[-1];
      uVar7 = *puVar5;
      local_98 = (undefined *)0x0;
      uStack_90 = 0xe000000000000000;
      _swift_bridgeObjectRetain(uVar7);
      __sSS6appendyySSF(uVar6,uVar7);
      __sSS6appendyySSF(0x3d713b,0xe300000000000000);
      __sSd5write2toyxz_ts16TextOutputStreamRzlF
                ((double)uVar9 * -0.1 + 1.0,&local_98,
                 PTR___ss26DefaultStringInterpolationVN_100995bf0,puVar4);
      _swift_bridgeObjectRelease(uVar7);
      uVar6 = uStack_90;
      puVar2 = local_98;
      uVar1 = *(ulong *)(puVar3 + 0x10);
      local_88 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_1002c0aec(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(local_88 + 0x10) = uVar1 + 1;
      *(undefined **)(local_88 + uVar1 * 0x10 + 0x20) = puVar2;
      *(undefined8 *)(local_88 + uVar1 * 0x10 + 0x28) = uVar6;
      puVar5 = puVar5 + 2;
    } while (uVar8 != uVar9);
  }
  puVar2 = local_88;
  puVar4 = &DAT_100a82770;
  local_98 = local_88;
  FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
  puVar5 = &DAT_100a82778;
  FUN_10003f840(&DAT_100a82778,&DAT_100a82770,&DAT_1008186c0,PTR___sSayxGSKsMc_100995888);
  uVar6 = 0x202c;
  uVar7 = 0xe200000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,puVar4,puVar5);
  _swift_release(puVar2);
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar6;
  return auVar10;
}

