// rea decompile_all
// name: FUN_100008ec0
// address: 0x100008ec0
// body: available
// range: 0x100008ec0-0x100009037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100008ec0(long param_1,byte param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  uint uVar4;
  
  uVar4 = 0;
  if ((*(char *)(unaff_x20 + 0x28) != '\x02') &&
     (((*(byte *)(unaff_x20 + 0x41) ^ param_2) & 1) == 0)) {
    if ((*(long *)(unaff_x20 + 8) == *(long *)(param_1 + 8)) &&
       (((*(long *)(unaff_x20 + 0x10) == *(long *)(param_1 + 0x10) &&
         (*(long *)(unaff_x20 + 0x18) == *(long *)(param_1 + 0x18))) &&
        (*(long *)(unaff_x20 + 0x20) == *(long *)(param_1 + 0x20))))) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar2 = *(ulong *)(unaff_x20 + 0x38);
      if (uVar2 >> 0x3c < 0xf) {
        if (param_4 >> 0x3c < 0xf) {
          FUN_1000081c4();
          FUN_100008184(param_3,param_4);
          uVar3 = uVar1;
          FUN_1000094a4(uVar1,uVar2,param_3,param_4);
          uVar4 = (uint)uVar3;
          FUN_100006cc8(param_3,param_4);
          FUN_100006cc8(uVar1,uVar2);
          goto LAB_100008f88;
        }
      }
      else if (0xe < param_4 >> 0x3c) {
        FUN_1000081c4();
        FUN_100008184(param_3,param_4);
        FUN_100006cc8(uVar1,uVar2);
        uVar4 = 1;
        goto LAB_100008f88;
      }
      FUN_1000081c4();
      FUN_100008184(param_3,param_4);
      FUN_100006cc8(uVar1,uVar2);
      FUN_100006cc8(param_3,param_4);
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
LAB_100008f88:
  return uVar4 & 1;
}

