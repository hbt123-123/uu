// rea decompile_all
// name: FUN_10034320c
// address: 0x10034320c
// body: available
// range: 0x10034320c-0x10034337f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10034320c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar1 = 0;
  __s10Foundation8URLErrorV4CodeVMa();
  local_68 = *(long *)(lVar1 + -8);
  puVar8 = auStack_70 + -(*(long *)(local_68 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar6 = *(ulong *)(param_2 + 0x28);
    puVar2 = &DAT_100a875d0;
    FUN_100005c90(&DAT_100a875d0,PTR___s10Foundation8URLErrorV4CodeVMa_1009962c8,
                  PTR___s10Foundation8URLErrorV4CodeVSHAAMc_1009962d8);
    __sSH13_rawHashValue4seedS2i_tFTj(uVar6,lVar1,puVar2);
    uVar4 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar4 ^ 0xffffffffffffffff);
    if ((*(ulong *)(param_2 + 0x38 + (uVar6 >> 3 & 0xffffffffffffff8)) >> (uVar6 & 0x3f) & 1) != 0)
    {
      lVar9 = *(long *)(local_68 + 0x48);
      pcVar7 = *(code **)(local_68 + 0x10);
      do {
        (*pcVar7)(puVar8,*(long *)(param_2 + 0x30) + lVar9 * uVar6,lVar1);
        puVar2 = &DAT_100a85438;
        FUN_100005c90(&DAT_100a85438,PTR___s10Foundation8URLErrorV4CodeVMa_1009962c8,
                      PTR___s10Foundation8URLErrorV4CodeVSQAAMc_1009962e0);
        puVar3 = puVar8;
        __sSQ2eeoiySbx_xtFZTj(puVar8,param_1,lVar1,puVar2);
        uVar5 = (uint)puVar3;
        (**(code **)(local_68 + 8))(puVar8,lVar1);
        if (((ulong)puVar3 & 1) != 0) break;
        uVar6 = uVar6 + 1 & ~uVar4;
      } while ((*(ulong *)(param_2 + 0x38 + (uVar6 >> 3 & 0xffffffffffffff8)) >> (uVar6 & 0x3f) & 1)
               != 0);
      goto LAB_10034335c;
    }
  }
  uVar5 = 0;
LAB_10034335c:
  return uVar5 & 1;
}

