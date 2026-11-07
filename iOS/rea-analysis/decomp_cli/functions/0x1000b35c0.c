// rea decompile_all
// name: FUN_1000b35c0
// address: 0x1000b35c0
// body: available
// range: 0x1000b35c0-0x1000b36a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000b35c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___sSTTL_1000f0350,PTR___s7ElementSTTl_1000f02a8);
  lVar7 = *(long *)(lVar1 + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar5 = &stack0xffffffffffffffb0 + -uVar4;
  lVar6 = (long)puVar5 - uVar4;
  (**(code **)(lVar7 + 0x10))(puVar5,param_1,lVar1);
  uVar2 = 0;
  __sShMa(0,lVar1,param_5);
  lVar3 = lVar6;
  __sSh6insertySb8inserted_x17memberAfterInserttxnF(lVar6,puVar5,uVar2);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  return (uint)lVar3 & 1;
}

