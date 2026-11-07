// rea decompile_all
// name: FUN_10076c7a8
// address: 0x10076c7a8
// body: available
// range: 0x10076c7a8-0x10076cab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076cab4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10076c7a8(char *param_1)

{
  thread_act_t target_act;
  int error_value;
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined4 local_79c;
  undefined8 local_798;
  mach_msg_header_t local_790;
  undefined8 uStack_778;
  undefined4 local_770;
  undefined1 auStack_760 [1232];
  mach_msg_header_t local_290;
  int local_274;
  undefined8 local_25c;
  int local_254;
  long local_24c;
  undefined8 uStack_244;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  _bzero(&local_290,0x244);
  local_770 = 0;
  local_790.msgh_remote_port = 0;
  local_790.msgh_local_port = 0;
  local_790.msgh_bits = 0;
  local_790.msgh_size = 0;
  uStack_778 = 0;
  local_790.msgh_reserved = 0;
  local_790.msgh_id = 0;
  _pthread_setname_np(param_1);
  target_act = _strcmp(param_1,"SentryCrash Exception Handler (Secondary)");
  if (target_act == 0) {
    FUN_1007871b4();
    _thread_suspend(target_act);
    puVar3 = &DAT_100b2d717;
  }
  else {
    puVar3 = &DAT_100b2d6f2;
  }
  error_value = _mach_msg(&local_290,2,0,0x244,DAT_100b2d820,0,0);
  while (error_value != 0) {
    _mach_error_string(error_value);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_MachException.c"
                  ,0x140,"mach_msg: %s");
    error_value = _mach_msg(&local_290,2,0,0x244,DAT_100b2d820,0,0);
  }
  if (DAT_100b2d6f0 == '\0') goto LAB_10076ca44;
  local_798 = 0;
  local_79c = 0;
  FUN_10079e954(&local_798,&local_79c);
  DAT_100b2d838 = 1;
  uVar1 = 1;
  FUN_1007656c0();
  FUN_1007871b4();
  if (uVar1 == DAT_100b2d6e8) {
    FUN_10076cab8();
    _thread_resume(DAT_100b2d6ec);
  }
  DAT_100b2d850 = auStack_760;
  FUN_10074b318(&DAT_100b2da08,0,0);
  FUN_10079e6e8(local_274,auStack_760,1);
  if (local_274 != 0) {
    FUN_100769e5c(&DAT_100b2da08,100,auStack_760);
    puVar2 = auStack_760;
    if (local_254 == 1) {
      FUN_100762178();
      DAT_100b2d858 = puVar2;
    }
    else {
      FUN_100761f90();
      DAT_100b2d858 = puVar2;
    }
  }
  DAT_100b2d860 = 1;
  DAT_100b2d84b = 1;
  DAT_100b2d880 = local_254;
  uRam0000000100b2d890 = uStack_244;
  DAT_100b2d888 = local_24c;
  if ((local_24c == 2) && (DAT_100b2d84c != '\0')) {
    DAT_100b2d888 = 1;
  }
  DAT_100b2d8b8 = 8;
  switch(local_254) {
  case 1:
    DAT_100b2d8b8 = 10;
    if (DAT_100b2d888 == 1) {
      DAT_100b2d8b8 = 0xb;
    }
    break;
  case 2:
    DAT_100b2d8b8 = 4;
    break;
  case 3:
    break;
  case 4:
    DAT_100b2d8b8 = 7;
    break;
  case 5:
    if (3 < DAT_100b2d888 - 0x10000U) goto switchD_10076c9dc_default;
    DAT_100b2d8b8 = *(undefined4 *)(&UNK_1008501f0 + (DAT_100b2d888 - 0x10000U) * 4);
    break;
  case 6:
    DAT_100b2d8b8 = 5;
    break;
  default:
switchD_10076c9dc_default:
    DAT_100b2d8b8 = 0;
  }
  DAT_100b2d878 = &DAT_100b2da08;
  DAT_100b2d840 = puVar3;
  FUN_100765730();
  DAT_100b2d838 = 0;
  FUN_10079ea7c(local_798,local_79c);
LAB_10076ca44:
  local_790.msgh_remote_port = local_290.msgh_remote_port;
  local_790.msgh_local_port = local_290.msgh_local_port;
  local_790.msgh_bits = local_290.msgh_bits;
  local_790.msgh_size = local_290.msgh_size;
  local_790.msgh_reserved = local_290.msgh_reserved;
  local_790.msgh_id = local_290.msgh_id;
  uStack_778 = local_25c;
  local_770 = 5;
  _mach_msg(&local_790,1,0x24,0,0,0,0);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

