// rea decompile_all
// name: FUN_1003e01e4
// address: 0x1003e01e4
// body: available
// range: 0x1003e01e4-0x1003e0323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e0228 to 0x1003e0434 FUN_1003e0434 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e01e4(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  char local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_5 != 0) {
    if (param_3 == '\x06') {
      FUN_1003e0434(param_1,param_4,param_5);
      return;
    }
    puVar1 = &DAT_100a8af50;
    FUN_100004bb4(&DAT_100a8af50,&DAT_10081f7e0);
    _swift_allocObject();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    local_68 = 0;
    uStack_60 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x14);
    local_50 = local_68;
    uStack_48 = uStack_60;
    __sSS6appendyySSF(0x1000000000000012,0x80000001008b4b30);
    local_68 = param_1;
    uStack_60 = param_2;
    local_58 = param_3;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_68,&local_50,&DAT_1009a8e98,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    *(undefined **)(puVar1 + 0x38) = PTR___sSSN_1009957f8;
    *(undefined8 *)(puVar1 + 0x20) = local_50;
    *(undefined8 *)(puVar1 + 0x28) = uStack_48;
    __ss5print_9separator10terminatoryypd_S2StF
              (puVar1,0x20,0xe100000000000000,10,0xe100000000000000);
    _swift_bridgeObjectRelease(puVar1);
  }
  return;
}

