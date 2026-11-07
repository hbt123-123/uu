// rea decompile_all
// name: FUN_10065250c
// address: 0x10065250c
// body: available
// range: 0x10065250c-0x10065266f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065250c(ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  lVar9 = *(long *)(param_2 + -8);
  puVar6 = &stack0xffffffffffffffa0 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,param_2,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar8 = (long)puVar6 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = uVar7;
  _swift_getAssociatedConformanceWitness
            (uVar7,param_2,lVar3,puVar1,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar8,&DAT_10084d4f0,0x100,lVar3,uVar4);
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(puVar6,lVar8,param_2,uVar7);
  lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar5 = param_1;
  __sSL2geoiySbx_xtFZTj(param_1,puVar6,param_2);
  (**(code **)(lVar9 + 8))(puVar6,param_2);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10065266c);
    (*pcVar2)();
  }
  (**(code **)(lVar9 + 0x10))(puVar6,param_1,param_2);
  FUN_100651fcc(puVar6,param_2,param_3);
  if (lVar3 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100652670);
  (*pcVar2)();
}

