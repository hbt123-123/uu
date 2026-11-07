// rea decompile_all
// name: FUN_1000aa8ac
// address: 0x1000aa8ac
// body: available
// range: 0x1000aa8ac-0x1000aa99b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000aa8ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  FUN_1000aa5fc();
  FUN_1000aa5fc(param_3,param_4);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_3 + 0x10);
  uVar4 = uVar3;
  if (uVar3 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    lVar5 = 4;
    do {
      uVar6 = lVar5 - 4;
      if (uVar6 < uVar2) {
        lVar7 = *(long *)(param_1 + lVar5 * 8);
        if (uVar6 < uVar3) goto LAB_1000aa92c;
        if (lVar7 != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(param_1);
          if (0 < lVar7) {
            return 1;
          }
          return 0xffffffffffffffff;
        }
      }
      else if (uVar6 < uVar3) {
        lVar7 = 0;
LAB_1000aa92c:
        if (uVar3 <= uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000aa99c);
          (*pcVar1)();
        }
        lVar8 = *(long *)(param_3 + lVar5 * 8);
        if (lVar7 != lVar8) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(param_1);
          if (lVar8 < lVar7) {
            return 1;
          }
          return 0xffffffffffffffff;
        }
      }
      lVar5 = lVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease(param_1);
  return 0;
}

