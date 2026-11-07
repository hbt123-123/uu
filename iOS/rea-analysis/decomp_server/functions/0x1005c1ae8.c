// rea decompile_all
// name: FUN_1005c1ae8
// address: 0x1005c1ae8
// body: available
// range: 0x1005c1ae8-0x1005c1d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c1ae8(undefined1 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar6;
  long lVar7;
  long local_60;
  undefined1 local_58;
  
  plVar4 = &local_60;
  puVar3 = param_1;
  if (*unaff_x20 != 0) {
    local_58 = (undefined1)unaff_x20[1];
    pcVar6 = *(code **)(param_3 + 0x80);
    local_60 = *unaff_x20;
    FUN_1005c4a10();
    (*pcVar6)(&local_60,1,&DAT_1009d7730,puVar3,param_2,param_3);
    puVar3 = (undefined1 *)plVar4;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] == 0) {
    iVar2 = *(int *)((long)unaff_x20 + 0x1c);
  }
  else {
    local_58 = (undefined1)unaff_x20[3];
    pcVar6 = *(code **)(param_3 + 0x80);
    local_60 = unaff_x20[2];
    FUN_1005c4a50();
    (*pcVar6)(&local_60,2,&DAT_1009d77c0,puVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
    iVar2 = *(int *)((long)unaff_x20 + 0x1c);
  }
  if ((iVar2 == 0) || ((**(code **)(param_3 + 0x18))(iVar2,3,param_2,param_3), unaff_x21 == 0)) {
    uVar1 = unaff_x20[5];
    uVar5 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar5 = uVar1 >> 0x38 & 0xf;
    }
    if ((uVar5 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar1,4,param_2,param_3), unaff_x21 == 0)) {
      uVar1 = unaff_x20[7];
      uVar5 = unaff_x20[6] & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar5 = uVar1 >> 0x38 & 0xf;
      }
      if (((uVar5 == 0) ||
          ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar1,6,param_2,param_3), unaff_x21 == 0)) &&
         ((uVar5 = (ulong)*(uint *)(unaff_x20 + 8), *(uint *)(unaff_x20 + 8) == 0 ||
          ((**(code **)(param_3 + 0x18))(uVar5,7,param_2,param_3), unaff_x21 == 0)))) {
        if (*(char *)((long)unaff_x20 + 0x44) == '\x01') {
          uVar5 = 1;
          (**(code **)(param_3 + 0x68))(1,8,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        lVar7 = unaff_x20[9];
        if (*(long *)(lVar7 + 0x10) != 0) {
          pcVar6 = *(code **)(param_3 + 0x118);
          FUN_100569038();
          (*pcVar6)(lVar7,9,&DAT_1009d7958,uVar5,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        uVar1 = unaff_x20[0xb];
        uVar5 = unaff_x20[10] & 0xffffffffffff;
        if ((uVar1 & 0x2000000000000000) != 0) {
          uVar5 = uVar1 >> 0x38 & 0xf;
        }
        if ((uVar5 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[10],uVar1,10,param_2,param_3), unaff_x21 == 0))
        {
          uVar1 = unaff_x20[0xd];
          uVar5 = unaff_x20[0xc] & 0xffffffffffff;
          if ((uVar1 & 0x2000000000000000) != 0) {
            uVar5 = uVar1 >> 0x38 & 0xf;
          }
          if ((uVar5 == 0) ||
             ((**(code **)(param_3 + 0x70))(unaff_x20[0xc],uVar1,0xb,param_2,param_3),
             unaff_x21 == 0)) {
            FUN_10056301c(param_1,unaff_x20[0xe],unaff_x20[0xf],param_2,param_3);
          }
        }
      }
    }
  }
  return;
}

