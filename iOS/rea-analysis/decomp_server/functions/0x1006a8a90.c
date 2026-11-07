// rea decompile_all
// name: FUN_1006a8a90
// address: 0x1006a8a90
// body: available
// range: 0x1006a8a90-0x1006a8c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a8a90(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *****local_68;
  ulong local_60;
  ulong local_58;
  
  if ((param_2 != 0) && (param_3 != (long *)0x0)) {
    plVar3 = param_1 + 1;
    FUN_100692c98();
    if ((plVar3 != (long *)0x0) ||
       (plVar3 = param_1, (**(code **)(*param_1 + 0x20))(), (int)plVar3 != 0)) {
      plVar3 = param_1 + 1;
      FUN_100692c98(plVar3);
      plVar4 = param_1 + 1;
      if ((char)param_1[5] == '\x01') {
        FUN_100692ea0();
        plVar5 = param_1 + 1;
        FUN_100692c98(plVar5);
        plVar6 = plVar5;
        FUN_1006aa5d4();
        plVar7 = param_1 + 1;
        FUN_100692eb0(plVar7);
        plVar8 = param_1;
        (**(code **)(*param_1 + 0x10))
                  (param_1,param_2,param_3,plVar7,
                   (long)plVar4 - ((long)plVar5 + ((ulong)plVar6 & 0xffffffff)));
        param_3 = plVar8;
        if (plVar8 == (long *)0xffffffffffffffff) {
          return;
        }
      }
      else {
        FUN_100692adc(plVar4,param_2,param_3);
      }
      plVar4 = param_1 + 8;
      lVar9 = (long)plVar3 - *plVar4;
      local_68 = (undefined8 ******)0x0;
      local_60 = 0;
      local_58 = 0;
      lVar10 = param_1[6];
      plVar3 = param_1 + 1;
      FUN_100692ca0(plVar3);
      FUN_1006aa824(lVar10,(long)plVar3 + lVar9,*plVar4 + (long)param_3,&local_68,plVar4);
      uVar1 = local_60;
      ppppppuVar2 = (undefined8 ******)local_68;
      if (-1 < (long)local_58) {
        uVar1 = local_58 >> 0x38;
        ppppppuVar2 = &local_68;
      }
      FUN_100692b2c(param_1 + 1,ppppppuVar2,uVar1,lVar9);
      uVar1 = local_60;
      if (-1 < (long)local_58) {
        uVar1 = local_58 >> 0x38;
      }
      FUN_100692dd4(param_1 + 1,uVar1 + lVar9,uVar1 + lVar9);
      FUN_100692ca0(param_1 + 1);
      FUN_1006aa684();
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
    }
  }
  return;
}

