// rea decompile_all
// name: FUN_10006dac0
// address: 0x10006dac0
// body: available
// range: 0x10006dac0-0x10006dbc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10006dac0(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  uVar1 = *(ulong *)(lVar5 + 0x28);
  __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar1,param_2 & 0xffffffff,4);
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 3 & 0xffffffffffffff8)) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(int *)(*(long *)(lVar5 + 0x30) + uVar1 * 4) == (int)param_2) {
        uVar2 = 0;
        goto LAB_10006dba4;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 3 & 0xffffffffffffff8)) >> (uVar1 & 0x3f) & 1) !=
             0);
  }
  lVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  lVar3 = *unaff_x20;
  FUN_10006de1c(param_2,uVar1,lVar5,param_3,param_4,param_5);
  *unaff_x20 = lVar3;
  uVar2 = 1;
LAB_10006dba4:
  *param_1 = (int)param_2;
  return uVar2;
}

