// rea decompile_all
// name: FUN_10064f16c
// address: 0x10064f16c
// body: available
// range: 0x10064f16c-0x10064f31b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064f16c(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 - 8);
  puVar3 = &stack0xffffffffffffffa0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_4 + 0x10);
  uVar1 = param_3;
  __sSF4signs17FloatingPointSignOvgTj(param_3,lVar5);
  uVar4 = param_3;
  if ((uVar1 & 1) == 0) {
    (**(code **)(lVar6 + 0x10))(puVar3,param_2,param_3);
    FUN_10064f380();
    if (param_5 != 0) {
      (**(code **)(lVar6 + 8))(param_2,param_3);
      goto LAB_10064f278;
    }
  }
  else {
    __ss13SignedNumericP1sopyxxFZTj(puVar3,param_2,param_3,*(undefined8 *)(lVar5 + 0x10));
    FUN_10064f380();
    if (param_5 != 0) {
      if ((param_4 & 0xff) == 0) {
        (**(code **)(lVar6 + 8))(param_2,param_3);
        if (puVar3 != (undefined1 *)0x0 || uVar4 != 0) {
          param_4 = 0;
          goto LAB_10064f2c4;
        }
LAB_10064f278:
        uVar2 = 0;
      }
      else if (((uint)param_4 & 0xff) == 1) {
        (**(code **)(lVar6 + 8))(param_2,param_3);
        param_4 = 1;
LAB_10064f2c4:
        uVar2 = 1;
      }
      else {
        lVar5 = *(long *)(param_5 + 0x10);
        (**(code **)(lVar6 + 8))(param_2,param_3);
        if (lVar5 == 0) goto LAB_10064f278;
        uVar2 = 1;
        param_4 = 2;
      }
      param_4 = param_4 & 0xff;
      goto LAB_10064f2f0;
    }
  }
  (**(code **)(lVar6 + 8))(param_2,param_3);
  puVar3 = (undefined1 *)0x0;
  uVar4 = 0;
  param_4 = 0;
  param_5 = 0;
  uVar2 = 0;
LAB_10064f2f0:
  *param_1 = puVar3;
  param_1[1] = uVar4;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}

