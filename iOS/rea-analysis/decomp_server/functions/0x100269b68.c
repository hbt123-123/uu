// rea decompile_all
// name: FUN_100269b68
// address: 0x100269b68
// body: available
// range: 0x100269b68-0x100269d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100269d50) */

void FUN_100269b68(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_c0;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  lVar8 = (long)&lStack_c0 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_100272854();
  plVar5 = (long *)(lVar8 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    _swift_beginAccess(param_3 + 0x10,auStack_90,0,0);
    param_3 = param_3 + 0x10;
    _swift_weakLoadStrong();
    if (param_3 == 0) {
      _swift_release(param_2);
    }
    else {
      lVar4 = 0;
      __s10Foundation10URLRequestVMa();
      lVar6 = *(long *)(lVar4 + -8);
      (**(code **)(lVar6 + 0x10))(lVar8,param_1,lVar4);
      pcVar7 = *(code **)(lVar6 + 0x38);
      (*pcVar7)(lVar8,0,1,lVar4);
      iVar1 = *(int *)(lVar3 + 0x14);
      (*pcVar7)((long)plVar5 + (long)iVar1,1,1,lVar4);
      *plVar5 = param_3;
      FUN_10026b244(lVar8,(long)plVar5 + (long)iVar1);
      lVar3 = *(long *)(param_2 + 0x48);
      uVar9 = *(ulong *)(lVar3 + 0x10);
      if (uVar9 != 0) {
        uVar10 = 0;
        lVar8 = lVar3 + 0x20;
        do {
          if (*(ulong *)(lVar3 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100269d50);
            (*pcVar7)();
          }
          FUN_1000b142c(lVar8,auStack_b8);
          FUN_100269d64(auStack_b8,plVar5,param_4,param_5,param_6);
          uVar10 = uVar10 + 1;
          FUN_10003f094(auStack_b8);
          lVar8 = lVar8 + 0x28;
        } while (uVar9 != uVar10);
      }
      _swift_release(param_2);
      FUN_1000d27dc(plVar5,FUN_100272854);
    }
  }
  return;
}

