// rea decompile_all
// name: FUN_10053716c
// address: 0x10053716c
// body: available
// range: 0x10053716c-0x1005374ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005373c4) */
/* WARNING: Removing unreachable block (ram,0x0001005373c8) */

void FUN_10053716c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  long unaff_x21;
  
  puVar3 = param_1;
  puVar7 = param_2;
  puVar8 = param_3;
  FUN_100536250();
  if (unaff_x21 != 0) {
    return;
  }
  while( true ) {
    if (((ulong)puVar8 & 1) == 0) {
      FUN_1005363c8(0x3a);
      if ((param_1[2] != 0) && (puVar4 = puVar7, FUN_100511c0c(), ((ulong)puVar4 & 1) != 0)) {
        return;
      }
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005374a8);
        (*pcVar2)();
      }
      puVar7 = (undefined8 *)((long)puVar7 - (long)puVar3);
      FUN_10054c680();
      puVar4 = puVar3;
      if (puVar7 == (undefined8 *)0x0) {
        FUN_1004f98e4();
        _swift_allocError(&DAT_1009d03a0,puVar3,0,0);
        puVar3[1] = 6;
        *puVar3 = 0;
        goto LAB_100537444;
      }
    }
    else {
      FUN_10053317c();
      FUN_1005363c8(0x3a);
      _swift_bridgeObjectRetain(puVar7);
      puVar4 = puVar3;
      FUN_1005481e4(puVar3,puVar7);
      _swift_bridgeObjectRelease(puVar7);
      if (param_1[2] != 0) {
        uVar6 = (long)puVar4 + puVar4[2] + 0x20;
        FUN_100511c0c();
        if ((uVar6 & 1) != 0) {
          _swift_bridgeObjectRelease(puVar7);
          _swift_release(puVar4);
          return;
        }
      }
      _swift_release(puVar4);
      puVar4 = puVar3;
    }
    puVar3 = puVar7;
    puVar5 = puVar4;
    puVar7 = puVar3;
    FUN_10053649c();
    if ((((uint)puVar5 & 0x1ff) == 0x5b) &&
       (puVar5 = puVar4, puVar7 = puVar3, FUN_100518b94(), ((uint)puVar5 & 0x1ff) == 0x5d)) {
      uVar6 = (ulong)puVar4 & 0xffffffffffff;
      if (((ulong)puVar3 & 0x2000000000000000) != 0) {
        uVar6 = (ulong)puVar3 >> 0x38 & 0xf;
      }
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005374a4);
        (*pcVar2)();
      }
      puVar7 = puVar3;
      FUN_10021892c(puVar4);
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005374ac);
        (*pcVar2)();
      }
      _swift_bridgeObjectRelease(puVar7);
      FUN_100536f44(1);
      FUN_100533634();
      _swift_bridgeObjectRelease(puVar7);
      lVar1 = *(long *)(unaff_x20 + 0x50);
      FUN_10003f030(unaff_x20 + 0x30,*(undefined8 *)(unaff_x20 + 0x48));
      puVar5 = param_2;
      puVar7 = param_3;
      puVar8 = puVar4;
      (**(code **)(lVar1 + 0x10))();
      if (((ulong)puVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar3);
        return;
      }
    }
    if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) break;
    FUN_100536528();
    FUN_10053320c();
    if (((ulong)puVar5 & 1) != 0) {
      _swift_bridgeObjectRelease(puVar3);
      return;
    }
    FUN_1005363c8(0x2c);
    _swift_bridgeObjectRelease();
    FUN_100536250();
  }
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,puVar5,0,0);
  *puVar5 = puVar4;
  puVar5[1] = puVar3;
LAB_100537444:
  _swift_willThrow();
  return;
}

