// rea decompile_all
// name: FUN_100799c88
// address: 0x100799c88
// body: available
// range: 0x100799c88-0x100799e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100799c88(long param_1)

{
  undefined8 uVar1;
  uint *puVar2;
  long lVar3;
  long local_68;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  
  uVar1 = DAT_100b2e188;
  if (DAT_100b2e178 != '\0') {
    *(undefined8 *)(param_1 + 0xe0) = DAT_100b2e180;
    *(undefined8 *)(param_1 + 0xe8) = uVar1;
    *(undefined8 *)(param_1 + 0xf0) = DAT_100b2e190;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    uVar1 = DAT_100b2e1a0;
    *(undefined8 *)(param_1 + 0x100) = DAT_100b2e198;
    *(undefined8 *)(param_1 + 0x108) = uVar1;
    *(undefined1 *)(param_1 + 0x110) = DAT_100b2e1a8;
    uVar1 = DAT_100b2e1b8;
    *(undefined8 *)(param_1 + 0x118) = DAT_100b2e1b0;
    *(undefined8 *)(param_1 + 0x120) = uVar1;
    uVar1 = DAT_100b2e1c8;
    *(undefined8 *)(param_1 + 0x128) = DAT_100b2e1c0;
    *(undefined8 *)(param_1 + 0x130) = uVar1;
    uVar1 = DAT_100b2e1d8;
    *(undefined8 *)(param_1 + 0x138) = DAT_100b2e1d0;
    *(undefined8 *)(param_1 + 0x140) = uVar1;
    uVar1 = DAT_100b2e1e8;
    *(undefined8 *)(param_1 + 0x148) = DAT_100b2e1e0;
    *(undefined8 *)(param_1 + 0x150) = uVar1;
    uVar1 = DAT_100b2e1f8;
    *(undefined8 *)(param_1 + 0x158) = DAT_100b2e1f0;
    *(undefined8 *)(param_1 + 0x160) = uVar1;
    *(undefined4 *)(param_1 + 0x168) = DAT_100b2e200;
    *(undefined4 *)(param_1 + 0x16c) = DAT_100b2e208;
    *(undefined4 *)(param_1 + 0x170) = DAT_100b2e210;
    *(undefined4 *)(param_1 + 0x174) = DAT_100b2e218;
    *(undefined8 *)(param_1 + 0x178) = DAT_100b2e220;
    *(undefined4 *)(param_1 + 0x180) = DAT_100b2e228;
    *(undefined4 *)(param_1 + 0x184) = DAT_100b2e230;
    uVar1 = DAT_100b2e240;
    *(undefined8 *)(param_1 + 0x188) = DAT_100b2e238;
    *(undefined8 *)(param_1 + 400) = uVar1;
    *(undefined8 *)(param_1 + 0x198) = DAT_100b2e248;
    puVar2 = &local_60;
    FUN_100799e20(puVar2,&local_68);
    lVar3 = local_68 * (ulong)local_60;
    if ((int)puVar2 == 0) {
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x1a0) = lVar3;
    puVar2 = &local_60;
    FUN_100799e20(puVar2,&local_68);
    lVar3 = 0;
    if ((int)puVar2 != 0) {
      lVar3 = local_68 *
              (ulong)(local_60 + iStack_5c + (int)uStack_58 + (int)((ulong)uStack_58 >> 0x20));
    }
    *(long *)(param_1 + 0x1a8) = lVar3;
  }
  return;
}

