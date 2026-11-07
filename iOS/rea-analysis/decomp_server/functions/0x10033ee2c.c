// rea decompile_all
// name: FUN_10033ee2c
// address: 0x10033ee2c
// body: available
// range: 0x10033ee2c-0x10033ef0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033ee2c(undefined8 param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar1 = 0;
  __s7Network6NWPathV6StatusOMa();
  lVar7 = *(long *)(lVar1 + -8);
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = &stack0xffffffffffffffb0 + -uVar5;
  __s7Network6NWPathV6statusAC6StatusOvg(puVar4);
  lVar6 = (long)puVar4 - uVar5;
  lVar2 = lVar6;
  (**(code **)(lVar7 + 0x68))
            (lVar6,*(undefined4 *)PTR___s7Network6NWPathV6StatusO11unsatisfiedyA2EmFWC_1009963d0,
             lVar1);
  FUN_10033fdfc();
  puVar3 = puVar4;
  __sSQ2eeoiySbx_xtFZTj(puVar4,lVar6,lVar1,lVar2);
  pcVar8 = *(code **)(lVar7 + 8);
  (*pcVar8)(lVar6,lVar1);
  (*pcVar8)(puVar4,lVar1);
  if (((ulong)puVar3 & 1) == 0) {
    (*param_2)(0);
  }
  return;
}

