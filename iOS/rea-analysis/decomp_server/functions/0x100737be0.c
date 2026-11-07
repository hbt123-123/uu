// rea decompile_all
// name: FUN_100737be0
// address: 0x100737be0
// body: available
// range: 0x100737be0-0x100737ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100737ec8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100737be0(long param_1,undefined8 param_2,char *param_3,int *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char acStack_120 [200];
  long local_58;
  
  pcVar2 = acStack_120;
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  *param_4 = *param_4 + -1;
  (**(code **)(param_1 + 0x70))();
  (**(code **)(param_1 + 0x18))(param_1,"address",param_3);
  pcVar3 = param_3;
  FUN_1007aebf4();
  iVar1 = (int)pcVar3;
  if (iVar1 == 3) {
    (**(code **)(param_1 + 0x20))(param_1,"type","objc_block");
    FUN_1007ae7b0(param_3);
    pcVar4 = *(code **)(param_1 + 0x20);
    pcVar3 = "class";
    pcVar2 = param_3;
LAB_100737e34:
    (*pcVar4)(param_1,pcVar3,pcVar2);
    goto LAB_100737e38;
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      (**(code **)(param_1 + 0x20))(param_1,"type","objc_class");
      pcVar4 = *(code **)(param_1 + 0x20);
      FUN_1007ae790(param_3);
      (*pcVar4)(param_1,"class",param_3);
      goto LAB_100737e38;
    }
switchD_100737d80_default:
    if (param_3 == (char *)0x0) {
      pcVar4 = *(code **)(param_1 + 0x20);
      pcVar3 = "type";
      pcVar2 = "null_pointer";
    }
    else {
      pcVar2 = param_3;
      FUN_100737ecc();
      pcVar4 = *(code **)(param_1 + 0x20);
      pcVar3 = "type";
      if ((int)pcVar2 == 0) {
        pcVar2 = "unknown";
      }
      else {
        (*pcVar4)(param_1,"type","string");
        pcVar4 = *(code **)(param_1 + 0x20);
        pcVar3 = "value";
        pcVar2 = param_3;
      }
    }
    goto LAB_100737e34;
  }
  (**(code **)(param_1 + 0x20))(param_1,"type","objc_object");
  pcVar3 = param_3;
  FUN_1007ae7b0();
  (**(code **)(param_1 + 0x20))(param_1,"class",pcVar3);
  if ((DAT_100b2ca80 != (undefined8 *)0x0) &&
     (uVar6 = (ulong)DAT_100b2ca88, puVar5 = DAT_100b2ca80, 0 < (int)DAT_100b2ca88)) {
    do {
      if (((char *)*puVar5 != (char *)0x0) && (iVar1 = _strcmp(pcVar3,(char *)*puVar5), iVar1 == 0))
      goto switchD_100737d80_default;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  pcVar3 = param_3;
  FUN_1007af8bc();
  switch((ulong)pcVar3 & 0xffffffff) {
  case 0:
  case 5:
  case 7:
    if (0 < *param_4) {
      FUN_100737fa8(param_1,param_3,param_4);
    }
    goto LAB_100737e38;
  case 1:
  case 3:
    FUN_1007aeefc(param_3,acStack_120,200);
    if ((int)param_3 == 0) goto LAB_100737e38;
    pcVar4 = *(code **)(param_1 + 0x20);
    pcVar3 = "value";
    goto LAB_100737e34;
  case 2:
    pcVar4 = *(code **)(param_1 + 8);
    FUN_1007af214(param_3);
    break;
  case 4:
    if (0 < *param_4) {
      FUN_100737f4c(param_1,param_3,param_4);
    }
    goto LAB_100737e38;
  case 6:
    pcVar4 = *(code **)(param_1 + 8);
    FUN_1007af23c(param_3);
    break;
  default:
    goto switchD_100737d80_default;
  }
  (*pcVar4)(param_1,"value");
LAB_100737e38:
  (**(code **)(param_1 + 0x80))(param_1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

