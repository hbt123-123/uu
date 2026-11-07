// rea decompile_all
// name: FUN_10026ff34
// address: 0x10026ff34
// body: available
// range: 0x10026ff34-0x1002700fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10026ff34(undefined *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  puVar6 = param_1;
  FUN_1002653e8();
  if (puVar6 == (undefined *)0x0) {
    puVar7 = &DAT_100a81370;
    FUN_100004bb4(&DAT_100a81370,&DAT_100815510);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
    pcVar1 = *(code **)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    local_a0 = (undefined *)0x0;
    uStack_98 = 0xe000000000000000;
    _swift_retain(uVar2);
    __ss11_StringGutsV4growyySiF(0x15);
    local_88 = local_a0;
    uStack_80 = uStack_98;
    __sSS6appendyySSF(0x616320726f727245,0xee0020676e696c6c);
    puVar6 = &DAT_100a81450;
    FUN_100004bb4(&DAT_100a81450,&DAT_1008157f0);
    puVar4 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
    puVar3 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (param_4,&local_88,puVar6,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    __sSS6appendyySSF(0x203a20,0xe300000000000000);
    local_a0 = param_1;
    uStack_98 = param_2;
    local_90 = param_3;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_a0,&local_88,&DAT_1009a8e98,puVar3,puVar4);
    uVar5 = uStack_80;
    uVar8 = 0x726f727245;
    uVar9 = 0xe500000000000000;
    (*pcVar1)(0x726f727245,0xe500000000000000,local_88,uStack_80,param_4);
    _swift_bridgeObjectRelease(uVar5);
    _swift_release(uVar2);
    *(undefined8 *)(puVar7 + 0x20) = uVar8;
    *(undefined8 *)(puVar7 + 0x28) = uVar9;
  }
  else {
    puVar7 = puVar6;
    FUN_10026fb68();
    _swift_release(puVar6);
  }
  return puVar7;
}

