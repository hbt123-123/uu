// rea decompile_all
// name: FUN_10033de68
// address: 0x10033de68
// body: available
// range: 0x10033de68-0x10033dee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033de68(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  __s7Network11NWInterfaceV13InterfaceTypeOMa();
  lVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (&stack0xffffffffffffffe0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1,lVar1);
  uVar2 = 0;
  __s7Network13NWPathMonitorCMa();
  _swift_allocObject();
  __s7Network13NWPathMonitorC21requiredInterfaceTypeAcA11NWInterfaceV0eF0O_tcfc
            (&stack0xffffffffffffffe0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),uVar2);
  return;
}

