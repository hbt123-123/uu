// rea decompile_all
// name: FUN_10062d414
// address: 0x10062d414
// body: available
// range: 0x10062d414-0x10062d953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010062d87c) */

long FUN_10062d414(undefined1 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  long unaff_x20;
  ulong uVar10;
  long unaff_x21;
  size_t sVar11;
  ulong uVar12;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  ulong local_c8;
  long local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  long local_70;
  
  puVar2 = *(undefined1 **)(unaff_x20 + 0x58);
  lVar4 = *(long *)(unaff_x20 + 0x60);
  FUN_10003f030(unaff_x20 + 0x40,puVar2);
  (**(code **)(lVar4 + 8))(puVar2,lVar4);
  if (((uint)puVar2 >> 2 & 1) != 0) {
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d924);
      (*pcVar9)();
    }
    if (((param_4 >> 1) - param_3 & 0xf) != 0) {
      FUN_10062e25c();
      _swift_allocError(&DAT_1009e12a8,puVar2,0,0);
      *puVar2 = 1;
      _swift_willThrow();
      return lVar4;
    }
  }
  FUN_10062a894(auStack_98);
  if (unaff_x21 == 0) {
    uVar12 = param_4 >> 1;
    uVar10 = uVar12 - param_3;
    if (SBORROW8(uVar12,param_3)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d928);
      (*pcVar9)();
    }
    uVar6 = uVar12;
    if ((0xf < uVar10) && (uVar6 = param_3 + 0x10, SCARRY8(param_3,0x10))) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d930);
      (*pcVar9)();
    }
    if ((long)uVar6 < (long)param_3) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d92c);
      (*pcVar9)();
    }
    if (uVar12 == param_3) {
      FUN_10062e25c();
      _swift_allocError(&DAT_1009e12a8,param_1,0,0);
      *param_1 = 2;
      _swift_willThrow();
      FUN_10003f094(auStack_98);
    }
    else {
      _swift_unknownObjectRetain();
      lVar3 = 0;
      FUN_1006295a0(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0,
                    PTR___swiftEmptyArrayStorage_100995ea0);
      uVar6 = uVar12;
      if ((0xf < uVar10) && (uVar6 = param_3 + 0x10, SCARRY8(param_3,0x10))) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d94c);
        (*pcVar9)();
      }
      if ((long)uVar6 < (long)param_3) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d87c);
        (*pcVar9)();
      }
      if ((long)uVar6 < (long)param_3) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d934);
        (*pcVar9)();
      }
      local_c0 = 0x10;
      local_e0 = param_1;
      uStack_d8 = param_2;
      local_d0 = param_3;
      local_c8 = param_4;
      uStack_b8 = param_3;
      local_b0 = uVar6;
      uStack_a8 = uVar12;
      local_a0 = uVar12;
      _swift_unknownObjectRetain(param_1);
      FUN_10062e29c(&local_e0);
      uVar8 = uVar12;
      if ((0xf < uVar10) && (uVar8 = param_3 + 0x10, SCARRY8(param_3,0x10))) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d950);
        (*pcVar9)();
      }
      if ((long)uVar8 < (long)param_3) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d938);
        (*pcVar9)();
      }
      if ((long)uVar12 < (long)param_3) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d93c);
        (*pcVar9)();
      }
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        if (SCARRY8(lVar5 + 1,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d8dc);
          (*pcVar9)();
        }
        if (SBORROW8(uVar12,uVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d8e0);
          (*pcVar9)();
        }
        uVar7 = uVar12;
        if ((0xf < uVar12 - uVar8) && (uVar7 = uVar8 + 0x10, SCARRY8(uVar8,0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d8f0);
          (*pcVar9)();
        }
        if ((long)uVar7 < (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d8e4);
          (*pcVar9)();
        }
        lVar4 = lVar5 + 1;
        bVar1 = uVar8 != uVar12;
        uVar8 = uVar7;
      } while (bVar1);
      if (SBORROW8(lVar5 + 2,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d940);
        (*pcVar9)();
      }
      if (lVar5 + 1 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d944);
        (*pcVar9)();
      }
      if (lVar5 + 2 != 1) {
        uVar8 = local_c8 >> 1;
        do {
          lVar5 = uVar8 - uVar6;
          if (SBORROW8(uVar8,uVar6)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d8e8);
            (*pcVar9)();
          }
          uVar7 = uVar8;
          if (local_c0 < 1) {
            if ((0 < lVar5) || (lVar5 <= local_c0)) goto LAB_10062d66c;
          }
          else if ((lVar5 < 0) || (local_c0 <= lVar5)) {
LAB_10062d66c:
            uVar7 = uVar6 + local_c0;
            if (SCARRY8(uVar6,local_c0)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d914);
              (*pcVar9)();
            }
          }
          if ((long)uVar7 < (long)uVar6) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d8ec);
            (*pcVar9)();
          }
          lVar4 = lVar4 + -1;
          uVar6 = uVar7;
        } while (lVar4 != 0);
      }
      uVar6 = uVar12;
      if ((0xf < uVar10) && (uVar6 = param_3 + 0x10, SCARRY8(param_3,0x10))) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d954);
        (*pcVar9)();
      }
      if ((long)uVar6 < (long)param_3) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d948);
        (*pcVar9)();
      }
      _swift_unknownObjectRetain(param_1);
      uVar10 = param_3;
      do {
        uVar8 = uVar6;
        lVar4 = local_70;
        if (SBORROW8(uVar12,uVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d8f4);
          (*pcVar9)();
        }
        uVar6 = uVar12;
        if ((0xf < uVar12 - uVar8) && (uVar6 = uVar8 + 0x10, SCARRY8(uVar8,0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d91c);
          (*pcVar9)();
        }
        if ((long)uVar6 < (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d8f8);
          (*pcVar9)();
        }
        if ((long)uVar10 < (long)param_3) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d8fc);
          (*pcVar9)();
        }
        if (((long)uVar12 < (long)uVar8) || ((long)uVar12 < (long)uVar10)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d900);
          (*pcVar9)();
        }
        if ((long)uVar8 < (long)param_3) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d904);
          (*pcVar9)();
        }
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d908);
          (*pcVar9)();
        }
        FUN_1000ce034(auStack_98,local_80);
        pcVar9 = *(code **)(lVar4 + 8);
        puVar2 = param_1;
        _swift_unknownObjectRetain();
        (*pcVar9)();
        _swift_unknownObjectRelease(param_1);
        sVar11 = *(size_t *)(puVar2 + 0x10);
        uVar7 = *(ulong *)(lVar3 + 0x10);
        uVar10 = uVar7 + sVar11;
        if (SCARRY8(uVar7,sVar11)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d90c);
          (*pcVar9)();
        }
        if ((long)(*(ulong *)(lVar3 + 0x18) >> 1) < (long)uVar10) {
          if (uVar7 <= uVar10) {
            uVar7 = uVar10;
          }
          lVar4 = 1;
          FUN_1006295a0(1,uVar7,1,lVar3);
          uVar7 = *(ulong *)(lVar4 + 0x10);
          if (*(long *)(puVar2 + 0x10) != 0) goto LAB_10062d7e8;
LAB_10062d6cc:
          _swift_bridgeObjectRelease(puVar2);
          if (sVar11 != 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d910);
            (*pcVar9)();
          }
        }
        else {
          lVar4 = lVar3;
          if (sVar11 == 0) goto LAB_10062d6cc;
LAB_10062d7e8:
          if ((long)((*(ulong *)(lVar4 + 0x18) >> 1) - uVar7) < (long)sVar11) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d918);
            (*pcVar9)();
          }
          _memcpy((void *)(lVar4 + uVar7 + 0x20),puVar2 + 0x20,sVar11);
          _swift_bridgeObjectRelease(puVar2);
          if (sVar11 != 0) {
            if (SCARRY8(*(long *)(lVar4 + 0x10),sVar11)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10062d920);
              (*pcVar9)();
            }
            *(size_t *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + sVar11;
          }
        }
        uVar10 = uVar8;
        lVar3 = lVar4;
      } while (uVar8 != uVar12);
      _swift_unknownObjectRelease_n(param_1,2);
      FUN_10003f094(auStack_98);
    }
  }
  return lVar4;
}

