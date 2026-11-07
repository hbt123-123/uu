// rea decompile_all
// name: FUN_1002c2390
// address: 0x1002c2390
// body: available
// range: 0x1002c2390-0x1002c272b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c2390(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long unaff_x21;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_90 [8];
  
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar17 = *(long *)(lVar3 + -8);
  puVar11 = auStack_90 + -(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSqMa(0,param_4);
  lVar13 = *(long *)(lVar4 + -8);
  lVar16 = (long)puVar11 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_4 + -8);
  lVar15 = lVar16 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar13 + 0x10))(lVar16,param_2,lVar4);
  lVar5 = lVar16;
  (**(code **)(lVar12 + 0x30))(lVar16,1,param_4);
  if ((int)lVar5 == 1) {
    (**(code **)(lVar13 + 8))(lVar16,lVar4);
    (**(code **)(lVar17 + 0x10))(param_1,param_3,lVar3);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar15,lVar16,param_4);
    (**(code **)(lVar17 + 0x10))(puVar11,param_3,lVar3);
    lVar5 = lVar15;
    lVar4 = param_4;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(lVar15,param_4,param_5);
    if (unaff_x21 == 0) {
      FUN_100008184();
      lVar13 = lVar5;
      __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(lVar5,lVar4);
      __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
      puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (lVar13 != 0) {
        FUN_1002bb634();
        _swift_bridgeObjectRelease(lVar13);
      }
      uVar10 = 0;
      uVar8 = 0x2d746e65746e6f43;
      FUN_1002bbc2c(0x2d746e65746e6f43,0xec00000065707954,puVar9);
      if ((uVar10 & 1) == 0) {
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002c2728);
          (*pcVar2)();
        }
        if (*(ulong *)(puVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002c272c);
          (*pcVar2)();
        }
        uVar14 = *(undefined8 *)(puVar9 + uVar8 * 0x20 + 0x38);
        _swift_bridgeObjectRetain(uVar14);
        _swift_bridgeObjectRelease(puVar9);
        FUN_100006cdc(lVar5,lVar4);
        _swift_bridgeObjectRelease(uVar14);
      }
      else {
        _swift_bridgeObjectRelease();
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
        puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (puVar9 != (undefined *)0x0) {
          FUN_1002bb634();
          _swift_bridgeObjectRelease(puVar9);
        }
        FUN_1002bba74(0x2d746e65746e6f43,0xec00000065707954,&DAT_d000000000000010,0x80000001008a8820
                     );
        puVar9 = puVar1;
        FUN_1002bc258(puVar1);
        _swift_bridgeObjectRelease(puVar1);
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(puVar9);
        FUN_100006cdc(lVar5,lVar4);
      }
      (**(code **)(lVar12 + 8))(lVar15,param_4);
      (**(code **)(lVar17 + 0x20))(param_1,puVar11,lVar3);
    }
    else {
      plVar6 = (long *)0x0;
      FUN_100277ad0();
      plVar7 = plVar6;
      FUN_1002c272c();
      _swift_allocError(plVar6,plVar7,0,0);
      *plVar7 = unaff_x21;
      _swift_storeEnumTagMultiPayload(plVar7,plVar6,5);
      _swift_willThrow();
      (**(code **)(lVar17 + 8))(puVar11,lVar3);
      (**(code **)(lVar12 + 8))(lVar15,param_4);
    }
  }
  return;
}

