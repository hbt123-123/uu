// rea decompile_all
// name: FUN_10045ac50
// address: 0x10045ac50
// body: available
// range: 0x10045ac50-0x10045aec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10045ac50(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  char *unaff_x20;
  long unaff_x21;
  code *pcVar7;
  long local_50;
  char local_48;
  
  plVar4 = &local_50;
  plVar5 = &local_50;
  plVar6 = &local_50;
  if (((((*unaff_x20 != '\x01') ||
        ((**(code **)(param_3 + 0x68))(1,1,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[1] != '\x01' ||
        ((**(code **)(param_3 + 0x68))(1,2,param_2,param_3), unaff_x21 == 0)))) &&
      ((unaff_x20[2] != '\x01' ||
       ((**(code **)(param_3 + 0x68))(1,3,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[3] != '\x01' ||
      ((**(code **)(param_3 + 0x68))(1,4,param_2,param_3), unaff_x21 == 0)))) {
    puVar3 = *(undefined1 **)(unaff_x20 + 8);
    uVar2 = *(ulong *)(unaff_x20 + 0x10);
    uVar1 = (ulong)puVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(puVar3,uVar2,5,param_2,param_3), unaff_x21 == 0)) {
      if (unaff_x20[0x18] == '\x01') {
        puVar3 = (undefined1 *)0x1;
        (**(code **)(param_3 + 0x68))(1,6,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        local_48 = unaff_x20[0x28];
        pcVar7 = *(code **)(param_3 + 0x80);
        local_50 = *(long *)(unaff_x20 + 0x20);
        FUN_10045f378();
        (*pcVar7)(&local_50,7,&DAT_1009c08f0,puVar3,param_2,param_3);
        puVar3 = (undefined1 *)plVar4;
        if (unaff_x21 != 0) {
          return;
        }
      }
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        local_48 = unaff_x20[0x38];
        pcVar7 = *(code **)(param_3 + 0x80);
        local_50 = *(long *)(unaff_x20 + 0x30);
        FUN_10045f3b8();
        (*pcVar7)(&local_50,8,&DAT_1009c0980,puVar3,param_2,param_3);
        puVar3 = (undefined1 *)plVar5;
        if (unaff_x21 != 0) {
          return;
        }
      }
      if (*(long *)(unaff_x20 + 0x40) != 0) {
        local_48 = unaff_x20[0x48];
        pcVar7 = *(code **)(param_3 + 0x80);
        local_50 = *(long *)(unaff_x20 + 0x40);
        FUN_10045f3b8();
        (*pcVar7)(&local_50,9,&DAT_1009c0980,puVar3,param_2,param_3);
        puVar3 = (undefined1 *)plVar6;
        if (unaff_x21 != 0) {
          return;
        }
      }
      if (*(long *)(unaff_x20 + 0x50) != 0) {
        local_48 = unaff_x20[0x58];
        pcVar7 = *(code **)(param_3 + 0x80);
        local_50 = *(long *)(unaff_x20 + 0x50);
        FUN_10045f3b8();
        (*pcVar7)(&local_50,10,&DAT_1009c0980,puVar3,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                    param_2,param_3);
    }
  }
  return;
}

