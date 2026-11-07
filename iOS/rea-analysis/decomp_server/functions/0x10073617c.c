// rea decompile_all
// name: FUN_10073617c
// address: 0x10073617c
// body: available
// range: 0x10073617c-0x1007364c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10073617c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  code *pcVar7;
  
  (**(code **)(param_1 + 0x70))(param_1,"error");
  (**(code **)(param_1 + 0x70))(param_1,"mach");
  lVar2 = (long)*(int *)(param_2 + 0x40);
  FUN_1007ad29c();
  lVar3 = *(long *)(param_2 + 0x48);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    FUN_1007ad2c0();
  }
  (**(code **)(param_1 + 0x18))(param_1,"exception",*(undefined4 *)(param_2 + 0x40));
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(param_1,"exception_name",lVar2);
  }
  (**(code **)(param_1 + 0x18))(param_1,"code",*(undefined4 *)(param_2 + 0x48));
  if (lVar3 != 0) {
    (**(code **)(param_1 + 0x20))(param_1,"code_name",lVar3);
  }
  (**(code **)(param_1 + 0x18))(param_1,"subcode",*(undefined8 *)(param_2 + 0x50));
  (**(code **)(param_1 + 0x80))(param_1);
  (**(code **)(param_1 + 0x70))(param_1,"signal");
  uVar4 = (ulong)*(uint *)(param_2 + 0x78);
  FUN_1007b2034();
  uVar5 = (ulong)*(uint *)(param_2 + 0x78);
  FUN_1007b206c(uVar5,*(undefined4 *)(param_2 + 0x7c));
  (**(code **)(param_1 + 0x18))(param_1,"signal",*(undefined4 *)(param_2 + 0x78));
  if (uVar4 != 0) {
    (**(code **)(param_1 + 0x20))(param_1,"name",uVar4);
  }
  (**(code **)(param_1 + 0x18))(param_1,"code",*(undefined4 *)(param_2 + 0x7c));
  if (uVar5 != 0) {
    (**(code **)(param_1 + 0x20))(param_1,"code_name",uVar5);
  }
  (**(code **)(param_1 + 0x80))(param_1);
  (**(code **)(param_1 + 0x18))(param_1,"address",*(undefined8 *)(param_2 + 0x18));
  if (*(long *)(param_2 + 0x30) != 0) {
    (**(code **)(param_1 + 0x20))(param_1,"reason");
  }
  iVar1 = *(int *)(param_2 + 0x20);
  switch(iVar1) {
  case 1:
    pcVar7 = *(code **)(param_1 + 0x20);
    pcVar6 = "mach";
    break;
  case 2:
    pcVar7 = *(code **)(param_1 + 0x20);
    pcVar6 = "signal";
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    goto switchD_100736368_caseD_3;
  case 4:
    (**(code **)(param_1 + 0x20))(param_1,"type","cpp_exception");
    (**(code **)(param_1 + 0x70))(param_1,"cpp_exception");
    pcVar7 = *(code **)(param_1 + 0x20);
    lVar2 = *(long *)(param_2 + 0x68);
    pcVar6 = "name";
LAB_100736494:
    (*pcVar7)(param_1,pcVar6,lVar2);
    goto LAB_10073649c;
  case 8:
    (**(code **)(param_1 + 0x20))(param_1,"type","nsexception");
    (**(code **)(param_1 + 0x70))(param_1,"nsexception");
    (**(code **)(param_1 + 0x20))(param_1,"name",*(undefined8 *)(param_2 + 0x58));
    (**(code **)(param_1 + 0x20))(param_1,"userInfo",*(undefined8 *)(param_2 + 0x60));
    lVar2 = *(long *)(param_2 + 0x30);
    if (lVar2 != 0) {
      pcVar7 = *(code **)(param_1 + 0x20);
      pcVar6 = "reason";
      goto LAB_100736494;
    }
LAB_10073649c:
    (**(code **)(param_1 + 0x80))(param_1);
    goto switchD_100736368_caseD_3;
  default:
    if ((iVar1 == 0x40) || (iVar1 == 0x80)) {
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                    ,0x52b,"Crash monitor type 0x%x shouldn\'t be able to cause events!");
    }
    goto switchD_100736368_caseD_3;
  }
  (*pcVar7)(param_1,"type",pcVar6);
switchD_100736368_caseD_3:
                    /* WARNING: Could not recover jumptable at 0x0001007364c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x80))(param_1);
  return;
}

