// rea decompile_all
// name: FUN_100250930
// address: 0x100250930
// body: available
// range: 0x100250930-0x1002509d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100250930(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 200);
    lVar1 = param_1;
    FUN_10024f750(param_1,param_1 + 0xd0,param_1 + 0x168,param_3,param_4,param_5,param_6,param_7,
                  param_8);
    *(ulong *)(param_1 + 0xa8) = (ulong)((int)lVar1 == 0);
    if ((param_2 != (undefined8 *)0x0) && ((int)lVar1 == 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0xd0);
      uVar4 = *(undefined8 *)(param_1 + 0xe8);
      uVar3 = *(undefined8 *)(param_1 + 0xe0);
      param_2[1] = *(undefined8 *)(param_1 + 0xd8);
      *param_2 = uVar2;
      param_2[3] = uVar4;
      param_2[2] = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0xf8);
      uVar2 = *(undefined8 *)(param_1 + 0xf0);
      uVar5 = *(undefined8 *)(param_1 + 0x108);
      uVar4 = *(undefined8 *)(param_1 + 0x100);
      uVar6 = *(undefined8 *)(param_1 + 0x110);
      uVar8 = *(undefined8 *)(param_1 + 0x128);
      uVar7 = *(undefined8 *)(param_1 + 0x120);
      param_2[9] = *(undefined8 *)(param_1 + 0x118);
      param_2[8] = uVar6;
      param_2[0xb] = uVar8;
      param_2[10] = uVar7;
      param_2[5] = uVar3;
      param_2[4] = uVar2;
      param_2[7] = uVar5;
      param_2[6] = uVar4;
      uVar3 = *(undefined8 *)(param_1 + 0x138);
      uVar2 = *(undefined8 *)(param_1 + 0x130);
      uVar5 = *(undefined8 *)(param_1 + 0x148);
      uVar4 = *(undefined8 *)(param_1 + 0x140);
      uVar7 = *(undefined8 *)(param_1 + 0x158);
      uVar6 = *(undefined8 *)(param_1 + 0x150);
      param_2[0x12] = *(undefined8 *)(param_1 + 0x160);
      param_2[0xf] = uVar5;
      param_2[0xe] = uVar4;
      param_2[0x11] = uVar7;
      param_2[0x10] = uVar6;
      param_2[0xd] = uVar3;
      param_2[0xc] = uVar2;
    }
    return lVar1;
  }
  return 0xffffff9a;
}

