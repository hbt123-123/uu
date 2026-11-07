// rea decompile_all
// name: FUN_1002be2fc
// address: 0x1002be2fc
// body: available
// range: 0x1002be2fc-0x1002be50b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002be2fc(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  
  local_88 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1002c0aec(0,0,0);
  puVar8 = local_88;
  param_4 = param_4 >> 1;
  _swift_unknownObjectRetain(param_1);
  if (param_4 != param_3) {
    lVar9 = 0;
    uVar1 = param_3;
    if ((long)param_3 <= (long)param_4) {
      uVar1 = param_4;
    }
    puVar5 = (undefined8 *)(param_2 + param_3 * 0x10 + 8);
    do {
      if (uVar1 - param_3 == lVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002be508);
        (*pcVar3)();
      }
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002be50c);
        (*pcVar3)();
      }
      uVar6 = puVar5[-1];
      uVar7 = *puVar5;
      local_98 = (undefined *)0x0;
      uStack_90 = 0xe000000000000000;
      _swift_bridgeObjectRetain(uVar7);
      __sSS6appendyySSF(uVar6,uVar7);
      __sSS6appendyySSF(0x3d713b,0xe300000000000000);
      __sSd5write2toyxz_ts16TextOutputStreamRzlF
                ((double)lVar9 * -0.1 + 1.0,&local_98,
                 PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      _swift_bridgeObjectRelease(uVar7);
      uVar6 = uStack_90;
      puVar4 = local_98;
      uVar2 = *(ulong *)(puVar8 + 0x10);
      local_88 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
        FUN_1002c0aec(1 < *(ulong *)(puVar8 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(local_88 + 0x10) = uVar2 + 1;
      *(undefined **)(local_88 + uVar2 * 0x10 + 0x20) = puVar4;
      *(undefined8 *)(local_88 + uVar2 * 0x10 + 0x28) = uVar6;
      lVar9 = lVar9 + 1;
      puVar5 = puVar5 + 2;
      puVar8 = local_88;
    } while (param_4 - param_3 != lVar9);
  }
  _swift_unknownObjectRelease(param_1);
  puVar4 = &DAT_100a82770;
  local_98 = puVar8;
  FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
  puVar5 = &DAT_100a82778;
  FUN_10003f840(&DAT_100a82778,&DAT_100a82770,&DAT_1008186c0,PTR___sSayxGSKsMc_100995888);
  uVar6 = 0x202c;
  uVar7 = 0xe200000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,puVar4,puVar5);
  _swift_release(puVar8);
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar6;
  return auVar10;
}

