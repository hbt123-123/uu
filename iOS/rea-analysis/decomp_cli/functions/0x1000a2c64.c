// rea decompile_all
// name: FUN_1000a2c64
// address: 0x1000a2c64
// body: available
// range: 0x1000a2c64-0x1000a2dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000a2c64(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined8 local_48;
  undefined8 local_38;
  
  iVar1 = (int)&local_a0;
  puVar4 = &local_a0;
  puVar5 = &local_a0;
  local_70 = param_1;
  uStack_68 = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar2 = &DAT_1001049e0;
  FUN_10000eb08(&DAT_1001049e0,&DAT_1000d56c8);
  _swift_dynamicCast(&local_a0,&local_70,PTR___sSSN_1000f02f8,puVar2,6);
  if (iVar1 == 0) {
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    FUN_10001fc18(&local_a0,&DAT_1001049e8,&DAT_1000d56d0);
    local_60 = (undefined1 *)0x0;
    puStack_58 = (undefined *)0xe000000000000000;
    local_a0 = param_1;
    uStack_98 = param_2;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_a0,&local_60,PTR___sSSN_1000f02f8,
               PTR___ss26DefaultStringInterpolationVN_1000f05a8,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
  }
  else {
    FUN_10008672c(&local_a0,&local_60);
    FUN_10000eba0(&local_60,local_48);
    uVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,local_38,local_48,PTR___sSYTL_1000f0360,PTR___s8RawValueSYTl_1000f02c0);
    uStack_88 = uVar3;
    FUN_100060d88(&local_a0);
    __sSY8rawValue03RawB0QzvgTj(puVar4,local_48,local_38);
    puVar2 = PTR___sypN_1000f0728 + 8;
    __sSS10describingSSx_tclufC(&local_a0,puVar2);
    FUN_100001428(&local_60);
    local_60 = (undefined1 *)puVar5;
    puStack_58 = puVar2;
  }
  auVar6._8_8_ = puStack_58;
  auVar6._0_8_ = local_60;
  return auVar6;
}

