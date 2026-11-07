// rea decompile_all
// name: FUN_1005b404c
// address: 0x1005b404c
// body: available
// range: 0x1005b404c-0x1005b412b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b404c(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(lVar6);
    puVar7 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar1 = puVar7[-1];
      uVar2 = *puVar7;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  uVar3 = (uint)(param_4 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((param_4 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1005b4100;
    }
    lVar6 = (long)(int)param_3;
    lVar5 = param_3 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar6 = *(long *)(param_3 + 0x10);
    lVar5 = *(long *)(param_3 + 0x18);
  }
  if (lVar6 == lVar5) {
    return;
  }
LAB_1005b4100:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_3,param_4);
  return;
}

