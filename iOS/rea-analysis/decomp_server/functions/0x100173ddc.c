// rea decompile_all
// name: FUN_100173ddc
// address: 0x100173ddc
// body: available
// range: 0x100173ddc-0x100173ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100173ddc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0x100000000000001e,0x80000001008967b0);
  param_2 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    _swift_release(param_2);
  }
  local_44 = param_2 == 0;
  puVar1 = &DAT_100a75aa8;
  local_48 = uVar2;
  FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_48,&local_40,puVar1,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x1000000000000013,0x8000000100892ec0);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

