// rea decompile_all
// name: FUN_100358d78
// address: 0x100358d78
// body: available
// range: 0x100358d78-0x100358e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100358d78(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
             code *param_6,undefined8 param_7,undefined8 param_8,long param_9,undefined8 param_10)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar7 = *(long *)(param_9 + -8);
  puVar6 = &stack0xffffffffffffffa0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_unownedRetainStrong(param_5);
  (*param_6)(puVar6);
  if (param_4 >> 0x3c < 0xf) {
    uVar3 = (uint)(param_4 >> 0x20);
    uVar4 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      uVar1 = param_4 >> 0x30 & 0xff;
      if (uVar4 != 0) {
        uVar1 = param_3 >> 0x20;
      }
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = (long)(int)param_3;
      }
      if (uVar2 == uVar1) goto LAB_100358e2c;
    }
    else if ((uVar4 != 2) || (*(long *)(param_3 + 0x10) == *(long *)(param_3 + 0x18)))
    goto LAB_100358e2c;
    puVar5 = puVar6;
    FUN_10035ab0c(puVar6,param_2,param_9,param_10);
    uVar3 = (uint)param_2;
  }
  else {
LAB_100358e2c:
    puVar5 = (undefined1 *)0x0;
    uVar3 = 0;
  }
  _swift_release(param_5);
  (**(code **)(lVar7 + 8))(puVar6,param_9);
  auVar8._8_4_ = uVar3 & 1;
  auVar8._0_8_ = puVar5;
  auVar8._12_4_ = 0;
  return auVar8;
}

