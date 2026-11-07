// rea decompile_all
// name: FUN_10033ae98
// address: 0x10033ae98
// body: available
// range: 0x10033ae98-0x10033b08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10033ae98(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  uVar1 = 0xb;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xb,0,0);
  if ((uVar1 & 1) == 0) {
    puVar4 = *(undefined1 **)PTR__kUTTagClassFilenameExtension_1009955e0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    _UTTypeCreatePreferredIdentifierForTag(puVar4,param_1,0);
    if (puVar4 != (undefined1 *)0x0) {
      lVar6 = *(long *)PTR__kUTTagClassMIMEType_1009955e8;
      _UTTypeCopyPreferredTagWithClass(puVar4,lVar6);
      if (puVar4 != (undefined1 *)0x0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        goto LAB_10033b070;
      }
    }
  }
  else {
    puVar2 = &DAT_100a86b08;
    FUN_100004bb4(&DAT_100a86b08,&DAT_10081ac00);
    puVar5 = &stack0xffffffffffffffb0 +
             -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar3 = 0;
    __s22UniformTypeIdentifiers6UTTypeVMa();
    lVar7 = *(long *)(lVar3 + -8);
    lVar6 = (long)puVar5 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_bridgeObjectRetain(param_2);
    __s22UniformTypeIdentifiers6UTTypeV4dataACvgZ(lVar6);
    __s22UniformTypeIdentifiers6UTTypeV17filenameExtension12conformingToACSgSS_ACtcfC
              (puVar5,param_1,param_2,lVar6);
    lVar6 = 1;
    puVar4 = puVar5;
    (**(code **)(lVar7 + 0x30))(puVar5,1,lVar3);
    if ((int)puVar4 == 1) {
      FUN_100040bb4(puVar5,&DAT_100a86b08,&DAT_10081ac00);
    }
    else {
      __s22UniformTypeIdentifiers6UTTypeV17preferredMIMETypeSSSgvg();
      (**(code **)(lVar7 + 8))(puVar5,lVar3);
      if (lVar6 != 0) goto LAB_10033b070;
    }
    _swift_bridgeObjectRelease(0);
  }
  puVar4 = &DAT_d000000000000018;
  lVar6 = -0x7ffffffeff754e50;
LAB_10033b070:
  auVar8._8_8_ = lVar6;
  auVar8._0_8_ = puVar4;
  return auVar8;
}

