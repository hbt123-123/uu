// rea decompile_all
// name: FUN_10062cfd4
// address: 0x10062cfd4
// body: available
// range: 0x10062cfd4-0x10062d413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010062d138) */
/* WARNING: Removing unreachable block (ram,0x00010062d340) */

long FUN_10062cfd4(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  size_t sVar11;
  long unaff_x20;
  size_t sVar12;
  long unaff_x21;
  code *pcVar13;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long local_68;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x58);
  uVar8 = *(ulong *)(unaff_x20 + 0x60);
  FUN_10003f030(unaff_x20 + 0x40,uVar3);
  (**(code **)(uVar8 + 0x18))();
  uVar1 = 0x10;
  if ((uVar8 & 1) == 0) {
    uVar1 = uVar3;
  }
  _swift_unknownObjectRetain(param_1);
  FUN_10062a680(auStack_90);
  if (unaff_x21 != 0) {
    _swift_unknownObjectRelease(param_1);
    return unaff_x20;
  }
  param_4 = param_4 >> 1;
  uVar3 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d40c);
    (*pcVar13)();
  }
  lVar4 = 0;
  FUN_1006295a0(0,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  uVar8 = param_4;
  if ((long)uVar1 < 1) {
    if (((long)uVar3 < 1) && ((long)uVar1 < (long)uVar3)) goto LAB_10062d0e0;
  }
  else if ((-1 < (long)uVar3) && (uVar3 < uVar1)) goto LAB_10062d0e0;
  uVar8 = param_3 + uVar1;
  if (SCARRY8(param_3,uVar1)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d414);
    (*pcVar13)();
  }
LAB_10062d0e0:
  if ((long)uVar8 < (long)param_3) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d410);
    (*pcVar13)();
  }
  _swift_unknownObjectRetain(param_1);
  uVar3 = param_3;
  lVar5 = local_68;
  do {
    uVar2 = uVar8;
    local_68 = lVar5;
    if (param_4 == uVar3) {
      _swift_unknownObjectRelease(param_1);
      FUN_1000ce034(auStack_90,local_78);
      FUN_10067ce04(local_78,local_68);
      FUN_100628ae0();
      puVar7 = *(undefined1 **)(unaff_x20 + 0x58);
      lVar5 = *(long *)(unaff_x20 + 0x60);
      FUN_10003f030(unaff_x20 + 0x40,puVar7);
      (**(code **)(lVar5 + 8))(puVar7,lVar5);
      if (((uint)puVar7 >> 2 & 1) == 0) {
        _swift_unknownObjectRelease(param_1);
      }
      else {
        if ((*(byte *)(lVar4 + 0x10) & 0xf) != 0) {
          FUN_10062e25c();
          _swift_allocError(&DAT_1009e12a8,puVar7,0,0);
          *puVar7 = 1;
          _swift_willThrow();
          _swift_bridgeObjectRelease(lVar4);
          _swift_unknownObjectRelease(param_1);
          FUN_10003f094(auStack_90);
          return lVar4;
        }
        _swift_unknownObjectRelease(param_1);
      }
      FUN_10003f094(auStack_90);
      return lVar4;
    }
    if ((long)uVar3 < (long)param_3) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d3e4);
      (*pcVar13)();
    }
    lVar6 = param_4 - uVar2;
    if (((long)param_4 < (long)uVar2) || ((long)param_4 < (long)uVar3)) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d3e8);
      (*pcVar13)();
    }
    if ((long)uVar2 < (long)param_3) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d3ec);
      (*pcVar13)();
    }
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d3f0);
      (*pcVar13)();
    }
    if ((long)uVar1 < 1) {
      if ((0 < lVar6) || (uVar8 = param_4, lVar6 <= (long)uVar1)) goto LAB_10062d1d8;
    }
    else if ((lVar6 < 0) || (uVar8 = param_4, (long)uVar1 <= lVar6)) {
LAB_10062d1d8:
      uVar8 = uVar2 + uVar1;
      if (SCARRY8(uVar2,uVar1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d404);
        (*pcVar13)();
      }
    }
    if ((long)uVar8 < (long)uVar2) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d3f4);
      (*pcVar13)();
    }
    FUN_1000ce034(auStack_90,local_78);
    pcVar13 = *(code **)(lVar5 + 8);
    lVar5 = param_1;
    _swift_unknownObjectRetain();
    (*pcVar13)();
    sVar12 = *(size_t *)(lVar5 + 0x10);
    uVar9 = *(ulong *)(lVar4 + 0x10);
    uVar3 = uVar9 + sVar12;
    if (SCARRY8(uVar9,sVar12)) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d3f8);
      (*pcVar13)();
    }
    uVar10 = *(ulong *)(lVar4 + 0x18) >> 1;
    sVar11 = sVar12;
    if ((long)uVar10 < (long)uVar3) {
      if (uVar9 <= uVar3) {
        uVar9 = uVar3;
      }
      lVar6 = 1;
      FUN_1006295a0(1,uVar9,1,lVar4);
      uVar9 = *(ulong *)(lVar6 + 0x10);
      uVar10 = *(ulong *)(lVar6 + 0x18) >> 1;
      sVar11 = *(size_t *)(lVar5 + 0x10);
      lVar4 = lVar6;
    }
    if (sVar11 == 0) {
      _swift_bridgeObjectRelease();
      if (sVar12 != 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d3fc);
        (*pcVar13)();
      }
    }
    else {
      if ((long)(uVar10 - uVar9) < (long)sVar12) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d400);
        (*pcVar13)();
      }
      _memcpy((void *)(lVar4 + uVar9 + 0x20),(void *)(lVar5 + 0x20),sVar12);
      _swift_bridgeObjectRelease(lVar5);
      if (sVar12 != 0) {
        if (SCARRY8(*(long *)(lVar4 + 0x10),sVar12)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10062d408);
          (*pcVar13)();
        }
        *(size_t *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + sVar12;
      }
    }
    _swift_unknownObjectRelease(param_1);
    uVar3 = uVar2;
    lVar5 = local_68;
  } while( true );
}

