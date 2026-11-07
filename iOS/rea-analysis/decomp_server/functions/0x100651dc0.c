// rea decompile_all
// name: FUN_100651dc0
// address: 0x100651dc0
// body: available
// range: 0x100651dc0-0x100651fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_100651dc0(ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  ulong local_68;
  
  lVar3 = 0;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,PTR___sSzTL_100995aa8,PTR___s5WordsSzTl_1009956f0);
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  puVar7 = auStack_70 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_2 + -8);
  lVar10 = (long)puVar7 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar11,param_2,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar12 = lVar10 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = uVar11;
  _swift_getAssociatedConformanceWitness
            (uVar11,param_2,lVar4,puVar1,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar12,&DAT_10084d4f0,0x100,lVar4,uVar5);
  uVar2 = local_68;
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(lVar10,lVar12,param_2,uVar11);
  uVar6 = uVar2;
  __sSL2leoiySbx_xtFZTj(uVar2,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(lVar10,param_2);
  if ((uVar6 & 1) == 0) {
    __sSz5words5WordsQzvgTj(puVar7,param_2,param_3);
    _swift_getAssociatedConformanceWitness
              (param_3,param_2,lVar3,PTR___sSzTL_100995aa8,PTR___sSz5WordsSz_SkTn_100995aa0);
    FUN_100660000(puVar7,lVar3,*(undefined8 *)(*(long *)(*(long *)(param_3 + 8) + 8) + 8));
  }
  else {
    puVar7 = (undefined1 *)0x0;
  }
  (*pcVar9)(uVar2,param_2);
  return puVar7;
}

