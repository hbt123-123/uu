// rea decompile_all
// name: FUN_10034dc54
// address: 0x10034dc54
// body: available
// range: 0x10034dc54-0x10034de13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034dc54(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 auStack_a8 [72];
  
  uVar8 = *(ulong *)(*unaff_x20 + 0x10);
  uVar7 = *(ulong *)(*unaff_x20 + 0x18);
  if ((uVar7 <= uVar8) || ((param_3 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if (uVar8 < uVar7) {
        FUN_10034e88c();
        goto LAB_10034ddac;
      }
      FUN_10034ec88(uVar8 + 1);
    }
    else {
      FUN_10034f360(uVar8 + 1);
    }
    lVar10 = *unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar10 + 0x28));
    lVar1 = _TtC9Alamofire7Request::id;
    uVar4 = 0;
    __s10Foundation4UUIDVMa(0);
    puVar5 = &DAT_100a82768;
    FUN_100005c90(&DAT_100a82768,PTR___s10Foundation4UUIDVMa_100996230,
                  PTR___s10Foundation4UUIDVSHAAMc_100996248);
    puVar6 = auStack_a8;
    __sSH4hash4intoys6HasherVz_tFTj(puVar6,uVar4,puVar5);
    __ss6HasherV9_finalizeSiyF();
    uVar8 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    param_2 = (ulong)puVar6 & (uVar8 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar10 + 0x38 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) !=
        0) {
      uVar4 = 0;
      FUN_1002d4054();
      do {
        lVar2 = _TtC9Alamofire7Request::id;
        lVar9 = *(long *)(*(long *)(lVar10 + 0x30) + param_2 * 8);
        _swift_retain(lVar9);
        uVar7 = lVar9 + lVar2;
        __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar7,param_1 + lVar1);
        _swift_release(lVar9);
        if ((uVar7 & 1) != 0) {
          __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(uVar4);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10034de14);
          (*pcVar3)();
        }
        param_2 = param_2 + 1 & ~uVar8;
      } while ((*(ulong *)(lVar10 + 0x38 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) &
               1) != 0);
    }
  }
LAB_10034ddac:
  lVar10 = *unaff_x20;
  lVar1 = lVar10 + (param_2 >> 6) * 8;
  *(ulong *)(lVar1 + 0x38) = *(ulong *)(lVar1 + 0x38) | 1L << (param_2 & 0x3f);
  *(long *)(*(long *)(lVar10 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar10 + 0x10),1)) {
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10034de08);
  (*pcVar3)();
}

