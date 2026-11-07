// rea decompile_all
// name: FUN_100344230
// address: 0x100344230
// body: available
// range: 0x100344230-0x100344303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100344230(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,long param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_2;
  (**(code **)(param_5 + 0x28))(param_4,param_5);
  if (*(long *)(param_4 + 0x10) != 0) {
    uVar2 = *(ulong *)(param_4 + 0x28);
    __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar2,lVar4);
    uVar3 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(param_4 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1) != 0)
    {
      do {
        bVar1 = *(long *)(*(long *)(param_4 + 0x30) + uVar2 * 8) == lVar4;
        if (bVar1) break;
        uVar2 = uVar2 + 1 & ~uVar3;
      } while ((*(ulong *)(param_4 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1)
               != 0);
      goto LAB_1003442e8;
    }
  }
  bVar1 = false;
LAB_1003442e8:
  _swift_bridgeObjectRelease();
  *(bool *)param_1 = bVar1;
  return;
}

