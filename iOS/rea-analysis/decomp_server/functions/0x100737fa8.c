// rea decompile_all
// name: FUN_100737fa8
// address: 0x100737fa8
// body: available
// range: 0x100737fa8-0x10073831f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073831c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100737fa8(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  code *pcVar7;
  ulong uVar8;
  undefined4 *puVar9;
  double dVar10;
  undefined8 local_198;
  undefined1 local_189;
  double local_188;
  float local_17c;
  ulong local_178;
  uint local_16c;
  uint local_168;
  ushort local_164;
  byte local_161;
  ulong local_160;
  int local_154;
  int local_150;
  short local_14c;
  char local_149 [17];
  undefined4 local_138 [56];
  long local_58;
  int iVar6;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  *param_3 = *param_3 + -1;
  (*(code *)param_1[0xe])(param_1,"ivars");
  uVar3 = param_2;
  FUN_1007af77c();
  if ((int)uVar3 == 0) {
    uVar3 = param_2;
    FUN_1007ae72c();
    uVar2 = (uint)uVar3;
    FUN_1007aea10();
    *param_3 = *param_3 - uVar2;
    if (0 < (int)uVar2) {
      uVar8 = (ulong)uVar2;
      puVar9 = local_138;
      do {
        cVar1 = **(char **)(puVar9 + -2);
        iVar5 = (int)cVar1;
        iVar6 = (int)cVar1;
        if (cVar1 < 'Q') {
          if (iVar6 < 0x3a) {
            if ((iVar6 == 0x23) || (iVar5 == 0x2a)) goto switchD_1007380a0_caseD_3a;
            goto switchD_1007380a0_caseD_3b;
          }
          switch(iVar5) {
          case 0x3a:
          case 0x40:
switchD_1007380a0_caseD_3a:
            FUN_1007aeb54(param_2,*puVar9,&local_198);
            FUN_100737be0(param_1,*(undefined8 *)(puVar9 + -4),local_198,param_3);
            break;
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x41:
            break;
          case 0x42:
            FUN_1007aeb54(param_2,*puVar9,&local_189);
            (*(code *)*param_1)(param_1,*(undefined8 *)(puVar9 + -4),local_189);
            break;
          case 0x43:
            FUN_1007aeb54(param_2,*puVar9,&local_161);
            pcVar7 = (code *)param_1[3];
            uVar3 = *(undefined8 *)(puVar9 + -4);
            uVar4 = (ulong)local_161;
            goto LAB_1007382c8;
          default:
            if (iVar5 == 0x49) {
              FUN_1007aeb54(param_2,*puVar9,&local_168);
              pcVar7 = (code *)param_1[3];
              uVar3 = *(undefined8 *)(puVar9 + -4);
              uVar4 = (ulong)local_168;
            }
            else {
              if (iVar5 != 0x4c) break;
              FUN_1007aeb54(param_2,*puVar9,&local_16c);
              pcVar7 = (code *)param_1[3];
              uVar3 = *(undefined8 *)(puVar9 + -4);
              uVar4 = (ulong)local_16c;
            }
            goto LAB_1007382c8;
          }
          goto switchD_1007380a0_caseD_3b;
        }
        switch(iVar6) {
        case 99:
          FUN_1007aeb54(param_2,*puVar9,local_149);
          pcVar7 = (code *)param_1[2];
          uVar3 = *(undefined8 *)(puVar9 + -4);
          uVar4 = (ulong)local_149[0];
          break;
        case 100:
          FUN_1007aeb54(param_2,*puVar9,&local_188);
          pcVar7 = (code *)param_1[1];
          uVar3 = *(undefined8 *)(puVar9 + -4);
          dVar10 = local_188;
          goto LAB_100738220;
        case 0x65:
        case 0x67:
        case 0x68:
        case 0x6a:
        case 0x6b:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x70:
        case 0x72:
          goto switchD_1007380a0_caseD_3b;
        case 0x66:
          FUN_1007aeb54(param_2,*puVar9,&local_17c);
          pcVar7 = (code *)param_1[1];
          uVar3 = *(undefined8 *)(puVar9 + -4);
          dVar10 = (double)local_17c;
LAB_100738220:
          (*pcVar7)(dVar10,param_1,uVar3);
          goto switchD_1007380a0_caseD_3b;
        case 0x69:
          FUN_1007aeb54(param_2,*puVar9,&local_150);
          pcVar7 = (code *)param_1[2];
          uVar3 = *(undefined8 *)(puVar9 + -4);
          uVar4 = (ulong)local_150;
          break;
        case 0x6c:
          FUN_1007aeb54(param_2,*puVar9,&local_154);
          pcVar7 = (code *)param_1[2];
          uVar3 = *(undefined8 *)(puVar9 + -4);
          uVar4 = (ulong)local_154;
          break;
        case 0x71:
          FUN_1007aeb54(param_2,*puVar9,&local_160);
          pcVar7 = (code *)param_1[2];
          uVar3 = *(undefined8 *)(puVar9 + -4);
          uVar4 = local_160;
          break;
        case 0x73:
          FUN_1007aeb54(param_2,*puVar9,&local_14c);
          pcVar7 = (code *)param_1[2];
          uVar3 = *(undefined8 *)(puVar9 + -4);
          uVar4 = (ulong)local_14c;
          break;
        default:
          if (iVar6 == 0x51) {
            FUN_1007aeb54(param_2,*puVar9,&local_178);
            pcVar7 = (code *)param_1[3];
            uVar3 = *(undefined8 *)(puVar9 + -4);
            uVar4 = local_178;
          }
          else {
            if (iVar5 != 0x53) goto switchD_1007380a0_caseD_3b;
            FUN_1007aeb54(param_2,*puVar9,&local_164);
            pcVar7 = (code *)param_1[3];
            uVar3 = *(undefined8 *)(puVar9 + -4);
            uVar4 = (ulong)local_164;
          }
        }
LAB_1007382c8:
        (*pcVar7)(param_1,uVar3,uVar4);
switchD_1007380a0_caseD_3b:
        puVar9 = puVar9 + 6;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    pcVar7 = (code *)param_1[2];
    FUN_1007aebec(param_2);
    (*pcVar7)(param_1,"tagged_payload",param_2);
  }
  (*(code *)param_1[0x10])(param_1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

